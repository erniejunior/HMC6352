/******************************************************************************
 *  ReadHMC6352
 *  An example sketch that prints the heading to the PC's serial port.
 *
 *  Tested with the Compass Module - HMC6352 Breakout from SparkFun Electronics
 *  http://www.sparkfun.com/products/7915
 ******************************************************************************/

#include <Wire.h>
#include <HMC6352.h>

HMC6352 compass;
  
void setup()
{  
  Wire.begin();
  Serial.begin(9600);
  
  delay(100);
  Serial.println("RST");
  delay(100);  
}

void loop() 
{ 
  compass.wakeUp();
  Serial.println(compass.getHeading());
  compass.sleep();
  delay(100);
}
