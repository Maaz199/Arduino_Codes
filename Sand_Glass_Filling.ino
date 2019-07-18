/* Project name		: Sand_Glass_Filling_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com

/****************Sand Glass Filling of LEDs using Arduino Library****************/

/*
Fill the LEDs with one second duration, repeatedly.
 */

// 4 Bit LEDs (L0 – L3) connected to Pin 13, 12, 11, 10 respectively.
// give them a name:
int L0 = 13;
int L1 = 12;
int L2 = 11;
int L3 = 10;

// the setup routine runs once when you press reset:
void setup() 
{                
 // initialize the digital pins as an output.
 pinMode(L0, OUTPUT);
 pinMode(L1, OUTPUT);
 pinMode(L2, OUTPUT);
 pinMode(L3, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() 
{
 digitalWrite(L0, HIGH);                // stores the status of L0(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L0, LOW);                 // stores the status of L0(LOW is the voltage level)
 digitalWrite(L1, HIGH);                // stores the status of L1(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L1, LOW);                 // stores the status of L1(LOW is the voltage level)
 digitalWrite(L2, HIGH);                // stores the status of L2(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L2, LOW);                 // stores the status of L2(LOW is the voltage level)
 digitalWrite(L3, HIGH);                // stores the status of L3(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L0, HIGH);                // stores the status of L0(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L0, LOW);                 // stores the status of L0(LOW is the voltage level)
 digitalWrite(L1, HIGH);                // stores the status of L1(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L1, LOW);                 // stores the status of L1(LOW is the voltage level)
 digitalWrite(L2, HIGH);                // stores the status of L2(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L0, HIGH);                // stores the status of L0(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L0, LOW);                 // stores the status of L0(LOW is the voltage level)
 digitalWrite(L1, HIGH);                // stores the status of L1(HIGH is the voltage level)
 delay(1000);              		// wait for a second
 digitalWrite(L0, HIGH);                // stores the status of L0(HIGH is the voltage level)
 delay(1000);              		// wait for a second

 digitalWrite(L0, LOW);                 // stores the status of L0(LOW is the voltage level)
 digitalWrite(L1, LOW);                 // stores the status of L1(LOW is the voltage level)
 digitalWrite(L2, LOW);                 // stores the status of L2(LOW is the voltage level)
 digitalWrite(L3, LOW);                 // stores the status of L3(LOW is the voltage level)
 delay(1000);              		// wait for a second
}

/*************end of the program*************/

