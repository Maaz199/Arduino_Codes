/* Project name		: Counter_using_Seven_Segment_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com

/*********Counter using Seven Segment & 4Bit Keypad with Arduino Library*********/
	
/*
Displaying counter value on Seven Segment w.r.t. to the incremented / decremented keys pressed.
*/

// Keypad (SW0-Incremented, SW1-Decremented) connected to Analog Pin 2, 3;
// Seven Segment Data Pins (DP, A - G) are connected to Digital Pins (0 - 7) and 
// Enable pins are connected to Digital pins 8 & 9 respectively.
// Include the SevenSegemnt.h file into the project folder or to the directory
// ARDUINO\arduino-1.0.5-windows\arduino-1.0.5\hardware\arduino\variants\standard

#include<SevenSegment.h>                // include Seven Segment header file

const int K0 = A2;
const int K1 = A3;

int K0State = 0;         
int K1State = 0;         

int x=0,num, s;

// the setup routine runs once when you press reset:
void setup()
{
  // initialize the digital pins as an output and analog pins as an input
  pinMode(K0, INPUT); 
  pinMode(K1, INPUT);

  // initialize the digital pins as an output using digit_begin function
  digit_begin();
}

void loop()
// the loop routine runs over and over again forever:
{
  K0State = digitalRead(K0);             // stores the status of the key K0 pressed in K0State
  K1State = digitalRead(K1);             // stores the status of the key K1 pressed in K1State

  num=x;
  s=(num/10);
  digitalWrite(en1, HIGH);               // stores the status of en1(HIGH is the voltage level)
  digitalWrite(en0, LOW);                // stores the status of en0(LOW is the voltage level)
  print_digit(s);
  delay(10);                             // wait for a 10ms 
  num=(num-(s*10));
  s=num;
  digitalWrite(en0, HIGH);               // stores the status of en0(HIGH is the voltage level)
  digitalWrite(en1, LOW);                // stores the status of en1(LOW is the voltage level)
  print_digit(s);
  delay(10);                             // wait for a 10ms 

  if (K0State == HIGH)                   // 'if' condition check
  { 
    x++;
    for(int z=0;z<=20;z++)
    {    
     num=x;
     s=(num/10);
     digitalWrite(en1, HIGH);           // stores the status of en1(HIGH is the voltage level)
     digitalWrite(en0, LOW);            // stores the status of en0(LOW is the voltage level)
     print_digit(s);
     delay(10);                         // wait for a 10ms 
     num=(num-(s*10));
     s=num;
     digitalWrite(en0, HIGH);           // stores the status of en0(HIGH is the voltage level)
     digitalWrite(en1, LOW);            // stores the status of en1(LOW is the voltage level)
     print_digit(s);
     delay(10);                         // wait for a 10ms 
    }
  }
  
  if (K1State == HIGH)                  // 'if' condition check
  {     
    x--;
    for(int y=0;y<=20;y++)
    {  
     num=x;
     s=(num/10);
     digitalWrite(en1, HIGH);            // stores the status of en1(HIGH is the voltage level)
     digitalWrite(en0, LOW);             // stores the status of en0(LOW is the voltage level)
     print_digit(s);
     delay(10);                          // wait for a 10ms 
     num=(num-(s*10));
     s=num;
     digitalWrite(en0, HIGH);            // stores the status of en0(HIGH is the voltage level)
     digitalWrite(en1, LOW);             // stores the status of en1(LOW is the voltage level)
     print_digit(s);
     delay(10);                          // wait for a 10ms 
    } 
  }
  
  if ((x>=99)||(x<=0))                   // 'if' condition check
   x=0;  
}

/*************end of the program*************/

