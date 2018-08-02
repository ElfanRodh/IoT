  const int led01 = 2;
  const int led02 = 3;
  const int led03 = 4;
  const int led04 = 5;
  const int led05 = 6;
  const int led06 = 7;

  const int ledON = HIGH;
  const int ledOFF = LOW;
  const int ledDelay = 50;

  int i;
  int j;

void setup() {
  // put your setup code here, to run once:
  for(j=0; j<1000; j++) {
    for(i=led01; i<=led06; i++) {
      pinMode(i, OUTPUT);
      digitalWrite(i, ledON);
      delay(ledDelay);
      digitalWrite(i, ledOFF);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  //digitalWrite(i, ledON);
  //delay(ledDelay);
  //digitalWrite(i, ledOFF);

  //i++;

  //i = (i > led06 ) ? led01 : i;
}
