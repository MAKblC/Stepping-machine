// Stepping machine test with IoTik32 and microstep driver
// Created by Maxim Kotov
#define Pulse 4 // PIN for PUL+ 
#define Dir 5   // PIN for DIR+

void setup()

{
 
pinMode(Pulse,OUTPUT);    // Making PINs for OUTPUT mode
pinMode(Dir,OUTPUT);      //    
digitalWrite(Dir,HIGH);   // LOW/HIGH - clockwise/counter-clockwise of rotating direction
}

void loop()
{
  int T = 2000;              // Period of one pulse in mcs  
  int num_of_steps = 800;    // Pulses per revolution   
  
for(int i=0; i<num_of_steps; i++)
{
  digitalWrite(Pulse,LOW);    // Cycle to make one revo
  digitalWrite(Pulse,HIGH);   //
  delayMicroseconds(T/2);     //
  digitalWrite(Pulse,LOW);    //
  delayMicroseconds(T/2);     //
} 
  digitalWrite(Pulse,LOW);    // Stop for 5sec
  delay(5000);                //
}
