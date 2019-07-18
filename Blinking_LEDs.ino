/* Project name		: Blinking_LEDs_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com

/*********Blinking of LEDs with Buzzer as indicator using Arduino Library*********/

/*
Turn 4 Bit LED and Buzzer ON for one second, then OFF for one second, repeatedly.
 */

// 4 Bit LEDs (L0 – L3) connected to Pin 13, 12, 11, 10 respectively and Buzzer BZ1 // connected to analog pin A1.
// give them a name:
int L0 = 13;
int L1 = 12;
int L2 = 11;
int L3 = 10;
int BZ1 = A1;

// the setup routine runs once when you press reset:
void setup() 
{                
// initialize the digital pins as an output.
pinMode(L0, OUTPUT);
pinMode(L1, OUTPUT);
pinMode(L2, OUTPUT);
pinMode(L3, OUTPUT);
pinMode(BZ1, OUTPUT);
     
}

// the loop routine runs over and over again forever:
void loop() 
{
digitalWrite(L0, HIGH);   // turn the LED L0 ON (HIGH is the voltage level)
digitalWrite(L1, HIGH);   // turn the LED L1 ON (HIGH is the voltage level)
digitalWrite(L2, HIGH);   // turn the LED L2 ON (HIGH is the voltage level)
digitalWrite(L3, HIGH);   // turn the LED L3 ON (HIGH is the voltage level)
digitalWrite(BZ1, HIGH);  // turn the Buzzer BZ1 ON (HIGH is the voltage level)
  delay(1000);              // wait for a second

digitalWrite(L0, LOW);    // turn the LED L0 OFF by making the voltage LOW
digitalWrite(L1, LOW);    // turn the LED L1 OFF by making the voltage LOW
digitalWrite(L2, LOW);    // turn the LED L2 OFF by making the voltage LOW
digitalWrite(L3, LOW);    // turn the LED L3 OFF by making the voltage LOW
digitalWrite(BZ1, LOW);   // turn the Buzzer BZ1 OFF by making the voltage LOW
  delay(1000);              // wait for a second
}
/*************end of the program*************/

