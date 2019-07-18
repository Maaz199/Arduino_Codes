/* Project name		: Seven_Segment_Display_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com



/*******************Seven Segment Diaplay using Arduino Library*******************/
	
/*
Display the counting from 0-9 on both the Segments
*/

// Seven Segment Data Pins (DP, A - G) are connected to Digital Pins (0 - 7) and 
// Enable pins are connected to Digital pins 8 & 9 respectively.
// Include the SevenSegemnt.h file into the project folder or to the directory
// ARDUINO\arduino-1.0.5-windows\arduino-1.0.5\hardware\arduino\variants\standard


#include <SevenSegment.h>			// includes Seven Segment header file

// the setup routine runs once when you press reset:
void setup()
{
// initialize the digital pins as an output using digit_begin function
digit_begin();
}

void loop()
	{
	for(int i=0;i<=9;i++)
		{
           digitalWrite(en0, HIGH); 		// enables Segment0
           digitalWrite(en1, HIGH); 		// enables Segemnt1
 print_digit(i); 			        // displays the digit 
		 delay(1000);                   // wait for a second
		}
	}

/*************end of the program*************/

