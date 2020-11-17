#define LED1 3
#define LED2 4
#define LED3 5
#define LED4 6
#define LED5 7
#define LEDON LOW
#define LEDOFF HIGH

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

int viive = 100;

void loop() {
  digitalWrite(LED1, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  delay(viive);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDON);
  delay(viive);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDON);
  delay(viive);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDON);
  delay(viive);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED4, LEDON);
  delay(viive);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED3, LEDON);
  delay(viive);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED2, LEDON);
  delay(viive);
  digitalWrite(LED2, LEDOFF);
  delay(viive);
}
