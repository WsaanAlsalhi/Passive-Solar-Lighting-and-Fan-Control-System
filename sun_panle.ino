#define SOLAR_SENSOR A0
#define FAN_PIN 3
#define LIGHT_PIN 4

void setup() {
  pinMode(FAN_PIN, OUTPUT);
  pinMode(LIGHT_PIN, OUTPUT);
  digitalWrite(FAN_PIN, LOW);
  digitalWrite(LIGHT_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
  int raw = analogRead(SOLAR_SENSOR);
  float voltage = (raw * 5.0) / 1023.0;  // Voltage read from A0

  Serial.print("Solar Voltage: ");
  Serial.println(voltage);

  if (voltage > 1.7) {  // Adjustable threshold based on light level
    digitalWrite(FAN_PIN, LOW);
    digitalWrite(LIGHT_PIN, LOW);
  } else {
    digitalWrite(FAN_PIN, HIGH);
    digitalWrite(LIGHT_PIN, HIGH);
  }

  delay(500);
}

