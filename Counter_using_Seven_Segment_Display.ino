/* Project name		: Counter_using_Seven_Segment_Display_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com

/***********************Counter using Arduino Library***********************/
	
/*
Counts the Number Starting from 00 to 99
*/

// Seven Segment Data Pins (DP, A - G) are connected to Digital Pins (0 - 7) and 
// Enable pins are connected to Digital pins 8 & 9 respectively.
// Include the SevenSegemnt.h file into the project folder or to the directory
// ARDUINO\arduino-1.0.5-windows\arduino-1.0.5\hardware\arduino\variants\standard 

#include<SevenSegment.h>
// the setup routine runs once when you press reset:
int num_1,num;   	      // Declare Variable
void setup()
{
  // initialize the digital pins as an output using digit_begin function
  digit_begin();

}


 void loop()
 {
  // the loop routine runs over and over again forever:
  for(int i=0;i<=99;i++)
  {
   num=i;
   num_1=num/10;
   digitalWrite(en1, HIGH);   // stores the status of en1(HIGH is the voltage level)
   digitalWrite(en1, LOW);    // stores the status of en1(LOW is the voltage level)
   print_digit(num_1);
   delay(10);                 // wait for a 10ms
   num=(num-(num_1*10));
   num_1=num;
   digitalWrite(en0, HIGH);   // stores the status of en0(HIGH is the voltage level)
   digitalWrite(en0, LOW);    // stores the status of en0(LOW is the voltage level)
   print_digit(num_1);
   delay(10);                 // wait for a 10ms
  }
}

/*************end of the program*************/

