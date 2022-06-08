
// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>
DHT dht(D2,DHT11);

int light = D7;
void setup() {
    pinMode(LED4,OUTPUT);
    dht.begin();

}

void loop() {
    digitalWrite(LED4,HIGH);
    
    float Temp = dht.getTempCelcius();
    Particle.publish("temp",String(Temp), PRIVATE);
    delay(10000);
    
    digitalWrite(LED4,LOW);
    delay(30000);

}
