int sensorPin = A0;    // select the input pin for the potentiometer
int pin1 = 5;      // select the pins for the LEDs
int pin2 = 6;
int pin3 = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPins as OUTPUTs:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  
  // turn the ledPins on
  if (255 <= sensorValue)
  {
    digitalWrite(pin1, HIGH);
  }
  if (511<=sensorValue)
  {
    digitalWrite(pin2, HIGH);
  }
  if (767<=sensorValue)
  {
  digitalWrite(pin3, HIGH);
  }
}
