/* Project name		: Seven_Segment_Display_using_Keypadfor_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com


/**********Seven Segemnt Display using 4Bit Keypad with Arduino Library**********/
	
/*
Displaying value on Seven Segment w.r.t. to the keys pressed.
*/

// Keypad (SW0 – SW1) connected to Analog Pin 2, 3, 4, 5; Seven Segment Data
// Pins (DP, A - G) are connected to Digital Pins (0 - 7) and 
// Enable pins are connected to Digital pins 8 & 9 respectively.
// Include the SevenSegemnt.h file into the project folder or to the directory
// ARDUINO\arduino-1.0.5-windows\arduino-1.0.5\hardware\arduino\variants\standard 

#include<SevenSegment.h>     // include Seven Segment header file

const int K0 = A2;
const int K1 = A3;
const int K2 = A4;
const int K3 = A5;

int K0State = 0;         
int K1State = 0;         
int K2State = 0;
int K3State = 0;

// the setup routine runs once when you press reset:
void setup()
{
  // initialize the digital pins as an output and analog pins as an input
  pinMode(K0, INPUT); 
  pinMode(K1, INPUT);
  pinMode(K2, INPUT);
  pinMode(K3, INPUT);
  
  // initialize the digital pins as an output using digit_begin function
  digit_begin();
}

void loop()
// the loop routine runs over and over again forever:
{
  K0State = digitalRead(K0); // stores the status of the key K0 pressed in K0State
  K1State = digitalRead(K1); // stores the status of the key K1 pressed in K1State
  K2State = digitalRead(K2); // stores the status of the key K2 pressed in K2State
  K3State = digitalRead(K3); // stores the status of the key K3 pressed in K3State

  // compares the status of the key pressed and display on the Segment
  if (K0State == HIGH)
  {     
   digitalWrite(en1, LOW);  // stores the status of en1(LOW is the voltage level)
   print_digit(0);
   digitalWrite(en0, HIGH); // stores the status of en0(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
   digitalWrite(en0, LOW);  // stores the status of en0(LOW is the voltage level)
   print_digit(0);
   digitalWrite(en1, HIGH); // stores the status of en1(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
  } 

  else if (K1State == HIGH)
  {     
   digitalWrite(en1, LOW);  // stores the status of en1(LOW is the voltage level)
   print_digit(1);
   digitalWrite(en0, HIGH); // stores the status of en0(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
   digitalWrite(en0, LOW);  // stores the status of en0(LOW is the voltage level)
   print_digit(0);
   digitalWrite(en1, HIGH); // stores the status of en1(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
  } 
  
  else if (K2State == HIGH)
  {     
   digitalWrite(en1, LOW);  // stores the status of en1(LOW is the voltage level)
   print_digit(2);
   digitalWrite(en0, HIGH); // stores the status of en0(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
   digitalWrite(en0, LOW);  // stores the status of en0(LOW is the voltage level)
   print_digit(0);
   digitalWrite(en1, HIGH); // stores the status of en1(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
  } 

  else if (K3State == HIGH)
  {     
   digitalWrite(en1, LOW);  // stores the status of en1(LOW is the voltage level)
   print_digit(3);
   digitalWrite(en0, HIGH); // stores the status of en0(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
   digitalWrite(en0, LOW);  // stores the status of en0(LOW is the voltage level)
   print_digit(0);
   digitalWrite(en1, HIGH); // stores the status of en1(HIGH is the voltage level)
   delay(10);               // wait for a 10ms
  } 

  else
  {
   digitalWrite(en0, LOW);  // stores the status of en0(LOW is the voltage level)
   digitalWrite(en1, LOW);  // stores the status of en1(LOW is the voltage level)
  }
  
}

/*************end of the program*************/

