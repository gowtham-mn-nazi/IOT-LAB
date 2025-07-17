#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 4

void  setup() {
  Serial.begin(9600);
  Serial.println("Temperature & Humidity sensor");
}

void loop() {
  int chk = DHT11.read(DHT11PIN);
  if(chk != DHTLIB_OK) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity);
  Serial.print("Temperature (°C): ");
  Serial.println((float)DHT11.temperature);
  delay(2000);
}