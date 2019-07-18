/* Project name		: PC-MC and MC-PC_Communication_for_Robomart_Arduino_Board
// Complied by 		: www.robomart.com
// Designed for         : ROBOSAPIENS TECHNOLOGIES PVT. LTD 
//                	  http://www.robosapiensindia.com


/**************PC – MC & MC – PC Communication using Arduino Library**************/

/* 

Simple Serial ECHO script from PC 

*/

/* Use a variable called byteRead to temporarily store the data coming from the computer and ECHO back the value to the serial port again*/


byte byteRead;

// the setup routine runs once when you press reset:

void setup() 
{                

  // Turn the Serial Protocol ON
  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:

void loop() 
{

// check if data has been sent from the computer: 
  
  if (Serial.available())
  {
      
  // read the most recent byte 
  
      byteRead = Serial.read();
      
  // ECHO the value that was read, back to the serial port
      
  Serial.write(byteRead);
    
  }

}

/*************end of the program*************/

