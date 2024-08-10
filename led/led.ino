#define LED_PIN 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ON");
  digitalWrite(LED_PIN, HIGH);
  delayMicroseconds(3000000);
  digitalWrite(LED_PIN, LOW);
  Serial.println("OFF");
  delayMicroseconds(3000000);
}
