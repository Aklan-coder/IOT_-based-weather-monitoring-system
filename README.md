# IoT Based Weather Monitoring System
## Abstract
The IoT Weather Monitoring System aims to develop a comprehensive and efficient solution for real-time weather data collection, analysis, and dissemination using the Internet of Things (IoT) technology. With the increasing need for accurate and up-to-date weather information, this project leverages interconnected sensors, data processing techniques, and cloud computing to create a reliable and accessible weather monitoring system.
The system comprises a network of weather sensors strategically deployed in various locations to capture meteorological parameters such as temperature, humidity, air pressure, and rainfall. These sensors are integrated with microcontrollers and wireless communication modules to transmit data to a central data hub. The data hub employs advanced data processing algorithms to clean, aggregate, and analyze the incoming data streams, ensuring the accuracy and quality of the information.
To enhance user accessibility, the processed weather data is made available through a user- friendly web application and mobile interface. Users can view current weather conditions, historical trends, and receive alerts for severe weather events based on the analyzed data. Additionally, the system's cloud-based architecture allows for scalability and remote management, ensuring seamless operation and easy expansion to accommodate growing demands.

### Keywords
*IOT, weather station,  Wi-Fi communication, microcontroller, embedded c/c++ and weather monitoring*

## I INTRODUCTION
Internet of Things(IoT) is a network of physical objects people called “things” embedded with software, electronics, network, and sensors that allow these objects to collect and exchange data. The goal of IoT is to extend internet connectivity from standard devices like computers, mobile, tablets to relatively dumb devices like a toaster. IoT makes virtually everything “smart” by improving aspects of our life with the power of data collection, AI algorithms, and networks. The IoT process starts with the devices themselves like smartphones, smartwatches, and electronic appliances like TV and Washing Machine, which helps you communicate with the IoT platform (Smith, 2021).
Sensors or devices are a critical component that helps to collect data from the surrounding environment. All this data may have serious levels of complexities. It could be a simple temperature monitoring sensor, or it may be in the video feed. A device may have various sensors that perform multiple tasks apart from sensing. A mobile phone has multiple sensors like GPS and a camera. Sensors are essential components in many applications Zureiqat et al., (2017), not only in the industries for process control but also in daily life for the safety of buildings and security monitoring, traffic flow measuring, weather condition monitoring, to mention a few. For instance, temperature, humidity, and pressure need to be measured in weather monitoring.
Weather condition or climate changes plays a vital role in human life. Human beings’ thermal comfort is influenced by six parameters, i.e., air temperature, radiation, airflow, humidity, activity level, and clothing thermal resistance. The advancement in technology has made these small and reliable electronic sensors capable of favorably monitoring environmental parameters (Zureiqat et al., 2017).
Several studies have been conducted to investigate the feasibility and effectiveness of the IoT weather monitoring system. These studies have focused on different aspects of the system, including design, implementation, and evaluation. For instance, Al-Turjman et al.,(2019), developed an IoT-based weather monitoring system that uses various sensors to monitor weather conditions in real-time. The system was tested in a real-world environment, and the results showed that it is highly effective in providing accurate and timely weather information.
Another study by Zhang et al., (2018), developed an IoT-based system IoT-enabled air quality monitoring systems provide real-time data on air pollutants, enabling better understanding of pollution sources, dispersion patterns, and the overall state of the environment. This information is crucial for environmental agencies and researchers to track air quality changes over time and assess the effectiveness of pollution control measures.
Al Amin et al., (2019), proposed a cloud-based IoT system for monitoring crop growth. The system uses various sensors to monitor soil moisture, temperature, and humidity, which can help optimize crop growth and yield.

This project is based on designing and implementing a weather monitoring system. This design is a low-cost yet reliable weather monitoring system capable of measuring, monitoring, and displaying data in real-time. Temperature, humidity, barometric pressure, and altitude measurements were taken herein. These data are logged onto a web page designed and viewed.
The condition of the earth’s climate is constantly changing, making it difficult to know when a disaster is around the corner. Many lives and properties have been lost due to natural disasters such as floods, cyclones, tornados, earthquakes, etc., airlines, in particular, are seeking. In many case, they come against unfavorable weather conditions. Given these problems, this research study is carried out to develop a weather monitoring system .

## METHODOLOGY  
To effectively achieve the objective of this project, the following are the methods and procedure that would be adopted:
•	Previous works and models done in the design of weather monitoring will be reviewed.
•	The library and the Internet would be consulted for detailed information on implementing this design.
•	Design and implement a microcontroller-based monitoring unit that would feature circuitries to help achieve the above-listed objectives.
•	Test the implemented electronic system that the above-listed objectives are duly met and that engineering standards for appliance design are not compromised.
•	Documentation of the whole procedure was taken to accomplish the goal of the project work.

## SYSTEM DESIGN 
The IoT weather monitoring system allows for weather parameter reporting over the Internet. It allows people to directly check the weather statistics online without a weather monitoring agency. The system uses temperature, humidity, and rain sensors to monitor the weather and provide live weather statistics. The system constantly monitors temperature using a temperature sensor, Relative humidity using a relative humidity sensor, and rain. The system constantly transmits this data to the microcontroller, which now processes it and transmits it to the online web server over a Wi-fi connection. This data life updated to be viewed on the online server system. Also, the system allows users to set alerts for particular instances. The system provides alerts to users if the weather parameters cross those values. Thus, The IoT-based weather reporting system provides users with an efficient Internet-based weather reporting system (ANON., 2021).
This system is designed to monitor weather temperature and humidity intensity of light in the atmosphere or at a particular place to make an interactive environment through a wireless network. The designed system is more adaptable and distributive to examine the environmental parameters. The architecture design is discussed in a 4-tier model. The working of particular modules developed for weather monitoring . The given model has 4- tiers. Tier 1 consists of the overall environment, Tier 2 contains all sensors, retrieving data and decision making is held in Tier 3, and acute environment is present in Tier 4.
Tier 1 gives information about the parameters and particular places to be monitored for weather parameters. Tier 2 deals with sensor devices having different characteristics, features and each of these sensors’ devices are controlled based on their range of sensing and sensitivity. In between Tier 2 and Tier 3, sensing and controlling based upon the conditions, like threshold value fixed by us, periodicity, messages like an alarm or LED, etc. The parameter threshold values in normal working conditions are examined based on the data analysis performed in two layers and past experiences. Tier 3 defines data acquisition from implemented sensor devices and decision-making. (Weather Climate – National Weather Service).

### ESP32 DEVELOPMENT BOARD:
ESP32 is a low-cost, low-power consumption systems on a chip of microcontrollers with integrated Wi-Fi and dual-mode Bluetooth (low power and performance mode where the low power is for the short range and the high power can be used for long range and while the initial setup). The ESP32 microcontroller has a Tensilica Xtensa LX6 microprocessor it is a both dual-core and single-core CPU chick can be designed by the programmer and includes built-in antenna switches for the Bluetooth and Wi-Fi connectivity, low-noise receive amplifier, RF balun, power amplifier, filters, and power management modules. ESP32 is developed and manufactured by Espress Systems, a Shanghai-based Chinese company, and is manufactured by TSMC using its 40 nm process.
#### Features
-	processor CPU: Xtensa dual-core (or single-core) 32-bit LX6 microprocessor, operating at 160 or 240 -MHz and performing at up to 600 DMIPS, Ultra-low-power (ULP) co-processor.
-	Memory: 520 KiB SRAM, 448 KiB ROM.
-	Wireless connectivity:  Wi-Fi: 802.11 b/g/n, 
-	Bluetooth: v4.2 BR/EDR and BLE (shares the radio with Wi-Fi).
-	Peripheral interfaces:  
-	34 × programmable GPIOs. 
-	12-bit SAR ADC up to 18 channels.
-	2 × 8-bit DACs. 10 × touch sensors (capacitive sensing GPIOs).
-	4 × SPI. 2 × I²S interfaces.
-	2 × I²C interfaces. × UART.  
-	SD/SDIO/CE-ATA/MMC/eMMC host controller. 
-	SDIO/SPI slave controller.  
-	CAN bus 2.0. Infrared remote controller (TX/RX, up to 8 channels).  
-	Motor PWM.  LED PWM (up to 16 channels).  
-	Hall effect sensor and temperature sensor

![ESP32 PIN DIAGRAM](https://user-images.githubusercontent.com/75389172/129439980-b9959e94-6b1d-4132-ba69-359b1e8c177c.png)

### OLED DISPLAY:
This display is made of 128x64 individual white OLED pixels; each one is turned on or off by the SH1106 controller IC as its microcontroller chip. the display made up of individual pixels hence no backlight is required and the display will also be compact and light weight to carry. This reduces the power required to run the OLED display which has the diagonal size of 0.96 inches. The 128x64 pixels OLED Display has an outline dimension of 26.70 x 19.26 mm and AA size 21.74x10.86 mm, it is built-in with SH1106 controller IC and it communicates via 6800/8080 8-bit parallel, I2C, and 4-wire serial interface. In our project we have the display programed to perform the 5 different operation which are more likely called as screens, the 1st display shows the current date and time of the current location which will be fetched by the microcontroller once it is connected to the internet , 2nd display shows the temperature as a main parameter and humidity and pleasure as the secondary parameters and corresponding the red led will be turned on, 3rd display we have the humidity as the main parameter and temperature and altitude as the secondary parameters and the corresponding the blue led will be turned on, 4th display shows the pleasure as a main parameter and humidity and temperature as the secondary parameters and corresponding the green led will be turned on and finally 5th display we have the luminance as the main parameter and temperature and humidity as the secondary parameters and the corresponding the blue led will be turned on Apart from these 5 led we have other 2 Leds one of them is the WIFI status led and display switch led. The Wi-Fi status led is a multicolor led shows us whether the microcontroller is connected to internet or not once the microcontroller is connected to the internet the Wi-Fi Staus led turns into green color and when the Wi-Fi is not connected the Wi-Fi status led will be in blue color, since this is an IOT based project the microcontroller need to be connected to the internet at least for the first time boot up because it need to get some data like current date and time our current location the location will be automatically identified once the microcontroller is connected to the internet. Well, the other led is the display switch indication led which will turn on once the display switch commend is given from a Blynk application which will be mentioned in the upcoming pages
![Weather-Station-PCB-ESP32-OLED-Screens](https://user-images.githubusercontent.com/75389172/129440034-c55c33f2-49c0-4594-a13a-781092dcc0ef.png)

### LDR (LIGHT DEPEENDENT RESISTOR):
A photoresistor (also known as a light-dependent resistor, LDR, or photo-conductive cell) is a passive component that decreases resistance concerning receiving luminosity (light) on the component's sensitive surface. The resistance of a photoresistor decreases with an increase in incident light intensity; in other words, it exhibits photoconductivity The LDR stands for the light dependent resistor in our project led is used to senses the amount of light present in the environment as a result instead of displaying the luminance we will be displaying percentage of light falling on the sensor (the minimum and maximum values can in modified in the program which will be loaded into the microcontroller), the LDR 1st terminal is connected to the ground and the other pin is connected to the 10k resistor to limit the current and the resistor leads to the +VCC. The junction of +VCC and the resistor is used as the data lines which will be connected to the analog to digital converter of the microcontroller and the code is done in such a way that the output will in the percentage
![LIGHT DEPEENDENT RESISTOR](https://user-images.githubusercontent.com/75389172/129440076-f768223e-b2a5-4d3d-a005-67cd370fca1b.png)

### BMP280 SENSOR:
BMP280 Digital Pressure Sensor is an absolute biometric pressure sensor specially designed for mobile applications. The sensor module is made in an extremely compact package. Bosch Sensor tec is the company who manufactured BMP280 Digital Pressure Sensor small dimensions and its low power consumption allow for the implementation in battery-driven devices. The BMP280 is based on piezo-resistive pressure sensor technology, featuring high accuracy and linearity as well as long-term stability and high EMC robustness. Numerous device operation options offer the highest flexibility to optimize the device regarding power consumption, resolution, and filter performance. The above diagram shows the connection for the for I2C connection apart from the ground and VCC this type of connection has the SDA and SDK where SDA stand for the serial data line and SDK stands for serial clock line, both of these lines are connected to the microcontroller SDA and SDK respectively. 
![BMP280 ](https://user-images.githubusercontent.com/75389172/129440098-b6b68a2c-4898-4692-b1e3-6747d026dd83.png) ![BMP280 ](https://user-images.githubusercontent.com/75389172/129440102-20b42daa-b836-44e5-abf1-bb4efb19240a.png)

#### FEATURES:
This sensor is mainly used to measure the temperature pressure and altitude
-	300hPa to 1100hPa pressure range, 8-pin LGA metal-lid package 
-	±0.12hPa, equiv. to ±1m (950 … 1050hPa @25°C) 
-	relative accuracy Typ. ±1hPa (950 to 1050hPa, 0 to +40°C) 
-	absolute accuracy 1.5Pa/K, Equiv. to 12.6cm/K temperature coefficient offset 
-	Digital Interfaces 
-	I2C (up to 3.4MHz) 
-	SPI (3 and 4 wire, up to 10MHz) 
-	2.7μA @ 1Hz sampling rate current consumption

### Circuit:
The block diagram consists of the components that are used in this project. Firstly, the microcontroller will involve ESP32mcu. This microcontroller board will communicate with other sensors as specified to get sensor data from the respective sensors and send data collected to servers via wireless communication and hotspot Wi-Fi. the data is then synced with the Blynk server and displayed to OLED display. The microcontroller will display the sensor data on OLED and also on the Blynk app. The data collected will be analyzed and displayed in the application
![Block diagram ](https://user-images.githubusercontent.com/75389172/129440157-d02bd2ca-dde8-4597-a3f4-9396c2900db1.png)

## Pin configuration 
components | GPIO pin numbers
------------ | -------------
OLDE Display - SDI | GPIO-21
OLDE Display - SDk | GPIO-22
BMP280 Display - SDI | GPIO-21
BMP280 Display - SDk | GPIO-22
DHT11 - data | GPIO-00
LDR | GPIO-33
WI-FI LED | GPIO-61
RED LED | GPIO-05
BLUE LED | GPIO-32
GREEN LED | GPIO-27
YELLOW LED | GPIO-12

![Hardware circuit connection ](https://user-images.githubusercontent.com/75389172/129440361-15ad3e28-349d-44c3-ba63-5a1543cae274.png)
The microcontroller needs to be powered by constant 5v 1A power supply via the vin and ground pin or using the micro-USB port, we will be using the USB type A to micro-USB cable and a charger adaptor for powering as it is maintained under specified range, the microcontroller can maximum output of 5v,3.3v with the maximum current flow of 80mA so to limit the current flow 270 ohm resistors are used in series with the led for a stable output and all the connections are made in the breadboard, our project consist of a touch sensor which can be connected to any Metalica surfaces to make it touch sensitive, the touch sensor measures the amount of charge present in the surface, this touch sensor is used to switch between the displays(screens) and the touch sensor is ground isolated from the supply , more over the microcontroller board has a built in voltage regulator so we can power it up with 3.3V to 12V supply
"# dsfd" 
"# IOT_-based-weather-monitoring-system" 
