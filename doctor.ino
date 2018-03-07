int led = 5;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fade = 25;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 5 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 5:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fade;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 1023) {
    fade = -fade;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
