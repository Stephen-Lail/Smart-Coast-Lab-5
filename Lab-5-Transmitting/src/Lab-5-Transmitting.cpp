/* 
 * Project: Smart Coast lab 5
 * Author: Stephen Lail
 * Date: 10/7/2024
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);


#define myLED D7

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here
  Serial.begin(9600);
  Serial1.begin(9600);

  pinMode(myLED,OUTPUT);


}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  
  digitalWrite(myLED, HIGH);
  Serial1.write('1');
  delay(500);
  digitalWrite(myLED,LOW);
  Serial1.write('0');
  delay(2000);


}
