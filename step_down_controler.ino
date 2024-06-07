int potentiometer_pin = A0; 
int pwm_pin = 3;          


void setup() {
  pinMode(potentiometer_pin, INPUT);
 
  pinMode(pwm_pin, OUTPUT);

  TCCR2B = TCCR2B & B11111000 | B00000011;
}

void loop() {  
  int duty_cycle = analogRead(potentiometer_pin);

  int duty_cycle_mapped = map(duty_cycle, 0, 1023, 0, 255);

  analogWrite(pwm_pin, duty_cycle_mapped);
}