#define RELAY_PIN 33 // Röle pinini 
#define ON_TIME 3600000  // Röle 60 dk duracak
#define OFF_TIME 1200000 // Röle 20 dk  çalışcak

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}
void loop() {
  digitalWrite(RELAY_PIN, HIGH);
    delay(ON_TIME);
  digitalWrite(RELAY_PIN, LOW);
    delay(OFF_TIME);
}
