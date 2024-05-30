#include <SoftwareSerial.h>

#include <dht.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);


dht DHT;

#define DHT11_PIN 7
#define RX 2
#define TX 3
String AP = "things";       // CHANGE ME
String PASS = "123456789"; // CHANGE ME
String API = "EL3U4Q9XV4RRMZFM";   // CHANGE ME
String HOST = "api.thingspeak.com";
String PORT = "80";
String field = "field1";
int countTrueCommand;
int countTimeCommand; 
boolean found = false; 
int valSensor = 1;
SoftwareSerial esp8266(RX,TX); 
 
  
void setup() {
    lcd.begin(16, 2);
  Serial.begin(9600);
 lcd.print("Load..........");
 
 esp8266.begin(115200);
  //esp8266.begin(74880);
  sendCommand("AT",5,"OK");
  sendCommand("AT+CWMODE=1",5,"OK");
  sendCommand("AT+CWJAP=\""+ AP +"\",\""+ PASS +"\"",20,"OK");
}
void loop() {

 int chk = DHT.read11(DHT11_PIN);


 
 String getData = "GET /update?api_key="+ API +"&"+ "field1"+"="+String(DHT.humidity>-999?DHT.humidity:0);
sendCommand("AT+CIPMUX=1",5,"OK");
 sendCommand("AT+CIPSTART=0,\"TCP\",\""+ HOST +"\","+ PORT,15,"OK");
 sendCommand("AT+CIPSEND=0," +String(getData.length()+ 4),4,">");
 esp8266.println(getData);delay(1500);countTrueCommand++;
 sendCommand("AT+CIPCLOSE=0",5,"OK");
 
 getData = "GET /update?api_key="+ API +"&"+ "field2" +"="+String(DHT.temperature>-999?DHT.temperature:0);
sendCommand("AT+CIPMUX=1",5,"OK");
 sendCommand("AT+CIPSTART=0,\"TCP\",\""+ HOST +"\","+ PORT,15,"OK");
 sendCommand("AT+CIPSEND=0," +String(getData.length()+ 4),4,">");
 esp8266.println(getData);delay(1500);countTrueCommand++;
 sendCommand("AT+CIPCLOSE=0",5,"OK");

 getData = "GET /update?api_key="+ API +"&"+ "field3" +"="+String(analogRead(A5)/10);
sendCommand("AT+CIPMUX=1",5,"OK");
 sendCommand("AT+CIPSTART=0,\"TCP\",\""+ HOST +"\","+ PORT,15,"OK");
 sendCommand("AT+CIPSEND=0," +String(getData.length()+ 4),4,">");
 esp8266.println(getData);delay(1500);countTrueCommand++;
 sendCommand("AT+CIPCLOSE=0",5,"OK");
 lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Temp: "+String(DHT.temperature)+"*C" );

    lcd.setCursor(0, 0);
  lcd.print("H: "+String(DHT.humidity) );

   lcd.setCursor(8, 0);
  lcd.print(" C02: "+String(analogRead(A5)));
 
}


void sendCommand(String command, int maxTime, char readReplay[]) {
  Serial.print(countTrueCommand);
  Serial.print(". at command => ");
  Serial.print(command);
  Serial.print(" ");
  while(countTimeCommand < (maxTime*1))
  {
    esp8266.println(command);//at+cipsend
    if(esp8266.find(readReplay))//ok
    {
      found = true;
      break;
    }
  
    countTimeCommand++;
  }
  
  if(found == true)
  {
    Serial.println("pass");
    countTrueCommand++;
    countTimeCommand = 0;
  }
  
  if(found == false)
  {
    Serial.println("Fail");
    countTrueCommand = 0;
    countTimeCommand = 0;
  }
  
  found = false;
 }
