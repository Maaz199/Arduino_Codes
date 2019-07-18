/* Project name		: Serial_Communication_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com

/**************Serial Communication Testing using Arduino Library**************/

/* 

Simple Serial Communication receives character from PC keyboard and generates LED Pattern on the Arduino Board 

*/

/* Use a variable called byteRead to temporarily store the data coming from the computer */


byte byteRead;
int L0 = 13;
int L1 = 12;
int L2 = 11;
int L3 = 10;

void setup() {                
// Turn the Serial Protocol ON
  Serial.begin(9600);
  pinMode(L0, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);     
}

void loop()
{
    /*  check if data has been sent from the computer: */
    if (Serial.available())
    {
    /* read the most recent byte */
    byteRead = Serial.read();
    
    if ((byteRead == 'A') || (byteRead == 'a'))
    {
     digitalWrite(L0, HIGH);    // stores the status of L0(HIGH is the voltage level)
     digitalWrite(L1, LOW);     // stores the status of L1(LOW is the voltage level)
     digitalWrite(L2, LOW);     // stores the status of L2(LOW is the voltage level)
     digitalWrite(L3, LOW);     // stores the status of L3(LOW is the voltage level)
    }
    
    else if ((byteRead == 'B') || (byteRead == 'b'))
    {
     digitalWrite(L1, HIGH);    // stores the status of L1(HIGH is the voltage level)
     digitalWrite(L0, LOW);     // stores the status of L0(LOW is the voltage level)
     digitalWrite(L2, LOW);     // stores the status of L2(LOW is the voltage level)
     digitalWrite(L3, LOW);     // stores the status of L3(LOW is the voltage level)
    }
    
    else if ((byteRead == 'C') || (byteRead == 'c'))
    {
     digitalWrite(L2, HIGH);    // stores the status of L2(HIGH is the voltage level)
     digitalWrite(L0, LOW);     // stores the status of L0(LOW is the voltage level)
     digitalWrite(L1, LOW);     // stores the status of L1(LOW is the voltage level)
     digitalWrite(L3, LOW);     // stores the status of L3(LOW is the voltage level)
    } 
    
    else if ((byteRead == 'D') || (byteRead == 'd'))
    {
     digitalWrite(L3, HIGH);    // stores the status of L3(HIGH is the voltage level)
     digitalWrite(L0, LOW);     // stores the status of L0(LOW is the voltage level)
     digitalWrite(L1, LOW);     // stores the status of L1(LOW is the voltage level)
     digitalWrite(L2, LOW);     // stores the status of L2(LOW is the voltage level)
    }
     else
     {
      digitalWrite(L0, LOW);    // stores the status of L0(LOW is the voltage level)
      digitalWrite(L1, LOW);    // stores the status of L1(LOW is the voltage level)
      digitalWrite(L2, LOW);    // stores the status of L2(LOW is the voltage level)
      digitalWrite(L3, LOW);    // stores the status of L3(LOW is the voltage level)
     }
    }
    
}

/*************end of the program*************/

