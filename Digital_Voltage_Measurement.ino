/* Project name		: Digital_Voltage_Measure_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com


/****************Digital Voltage Measurement using Arduino Library****************/

/*
Measures the change in analog signal and display equivalent digital value on Seven Segment Display
*/

// Seven Segment Data Pins (DP, A - G) are connected to Digital Pins (0 - 7) and 
// Enable pins are connected to Digital pins 8 & 9 respectively. 
// POT is connected to Analog 0 pin.
// Include the SevenSegemnt.h file into the project folder or to the directory
// ARDUINO\arduino-1.0.5-windows\arduino-1.0.5\hardware\arduino\variants\standard 

#include<SevenSegment.h>

int sensorPin = A0;    
int sensorValue = 0;
int s,num;

// the setup routine runs once when you press reset:
void setup()
{ 
  // initialize the digital pins as an output using digit_begin function            
  digit_begin();
}


void loop()
 {
  // the loop routine runs over and over again forever:
  sensorValue = analogRead(sensorPin);    // Store the analog input value 
  sensorValue = sensorValue/20;
  num=sensorValue;
  s=(num/10);
  digitalWrite(en1, HIGH);                // stores the status of en1(HIGH is the voltage level)
  digitalWrite(dp,HIGH);                  // stores the status of dp(HIGH is the voltage level)
  digitalWrite(en0, LOW);                 // stores the status of en0(HIGH is the voltage level)
  print_digit(s);
  delay(10);                              // wait for a 10ms
  num=(num-(s*10));
  s=num;
  digitalWrite(en0, HIGH);                // stores the status of en0(LOW is the voltage level)
  digitalWrite(dp,LOW);                   // stores the status of dp(LOW is the voltage level)
  digitalWrite(en1, LOW);                 // stores the status of en1(LOW is the voltage level)
  print_digit(s);
  delay(10);                              // wait for a 10ms
}

/*************end of the program*************/

