int potentiometer = A0;  // Pino para o potenciômetro
int feedback = A1;       // Pino para o feedback de saída
int PWM = 3;             // Pino PWM para controle do Mosfet
int pwm = 128;           // Valor inicial do PWM (meio-termo)

void setup() {
  pinMode(potentiometer, INPUT);
  pinMode(feedback, INPUT);
  pinMode(PWM, OUTPUT);
  
  // Configura a frequência PWM dos pinos 3 e 11 para 31372.55Hz
  TCCR2B = TCCR2B & B11111000 | B00000001; 
}

void loop() {
  float voltage = analogRead(potentiometer);  // Leitura do potenciômetro
  float output = analogRead(feedback);        // Leitura do feedback de saída
  
  // Ajuste do valor do PWM com base na comparação entre voltage e output
  if (voltage > output) {   
    pwm = pwm - 1;
    pwm = constrain(pwm, 1, 254);  // Limita o valor de pwm entre 1 e 254
  }
  
  if (voltage < output) {
    pwm = pwm + 1;
    pwm = constrain(pwm, 1, 254);  // Limita o valor de pwm entre 1 e 254
  }
  
  analogWrite(PWM, pwm);  // Escreve o valor do PWM no pino de controle
}
