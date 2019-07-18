/* Project name		: De-bouncing_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com

/***********************De-bouncing using Arduino Library***********************/

/*
Turn the LEDs ON w.r.t. the Keys pressed and Turn OFF when released
*/

// 4 Bit LEDs (L0 – L3) connected to Pin 13, 12, 11, 10 and Keypad (SW0 – SW1
// connected to Analog Pin 2, 3, 4, 5 respectively.

// give them a name:
const int K0 = A2;
const int K1 = A3;
const int K2 = A4;
const int K3 = A5;

const int L0 =  13;
const int L1 =  12;
const int L2 =  11;
const int L3 =  10;

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
  
  pinMode(L0, OUTPUT);      
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
}

void loop()
// the loop routine runs over and over again forever:
{
  K0State = digitalRead(K0); // stores the status of the key K0 pressed in K0State
  K1State = digitalRead(K1); // stores the status of the key K1 pressed in K1State
  K2State = digitalRead(K2); // stores the status of the key K2 pressed in K2State
  K3State = digitalRead(K3); // stores the status of the key K3 pressed in K3State

  // compares the status of the key pressed and Turn ON the desired LED
  if (K0State == HIGH)
  {     
    digitalWrite(L0, HIGH);  // stores the status of L0(HIGH is the voltage level)
  } 

  if (K1State == HIGH)
  {     
    digitalWrite(L1, HIGH);  // stores the status of L1(HIGH is the voltage level)
  } 
  
  if (K2State == HIGH)
  {     
    digitalWrite(L2, HIGH);  // stores the status of L2(HIGH is the voltage level)
  } 

  if (K3State == HIGH)
  {     
    digitalWrite(L3, HIGH);  // stores the status of L3(HIGH is the voltage level)
  } 

  else
  {
   digitalWrite(L0, LOW);    // stores the status of L0(LOW is the voltage level)
   digitalWrite(L1, LOW);    // stores the status of L1(LOW is the voltage level)
   digitalWrite(L2, LOW);    // stores the status of L2(LOW is the voltage level)
   digitalWrite(L3, LOW);    // stores the status of L3(LOW is the voltage level)
  }
   }

/*************end of the program*************/

