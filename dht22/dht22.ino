//
//    FILE: dht_test.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.07
// PURPOSE: DHT Temperature & Humidity Sensor library for Arduino
//     URL: http://arduino.cc/playground/Main/DHTLib
//
// Released to the public domain
//

#include <dht.h>

dht DHT;

#define DHT22_PIN 9

void setup()
{
  Serial.begin(9600);
  //Serial.println("DHT TEST PROGRAM ");
  //Serial.print("LIBRARY VERSION: ");
  //Serial.println(DHT_LIB_VERSION);
  //Serial.println();
  //Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
}

void loop()
{
  // READ DATA

  DHT.read22(DHT22_PIN);
/* 
  Serial.print("DHT22, \t");
  int chk = DHT.read22(DHT22_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
    Serial.print("OK,\t"); 
    break;
    case DHTLIB_ERROR_CHECKSUM: 
    Serial.print("Checksum error,\t"); 
    break;
    case DHTLIB_ERROR_TIMEOUT: 
    Serial.print("Time out error,\t"); 
    break;
    default: 
    Serial.print("Unknown error,\t"); 
    break;
  }
  */
  // DISPLAY DATA
  //Print this Arduino's ID
  //
  Serial.print("Arduino1");
  Serial.print(",");
  Serial.print(DHT.humidity, 1);
  Serial.print(",");
  //Print carriage return after this line so that we can use a
  //readLine method to capture an entire line. The next line
  //represents a different set of data at a different time and 
  //representing perhaps a different trigger condition
  Serial.println(DHT.temperature, 1);

  delay(1000);

}
//
// END OF FILE
//
