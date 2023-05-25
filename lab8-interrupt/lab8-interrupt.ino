#define LED 32
#define pinoLDRLow 23
#define pinoLDRHigh 22

void IRAM_ATTR turnLEDOn_ISR()
{
  digitalWrite(LED,LOW);
}

void IRAM_ATTR turnLEDOff_ISR()
{
  digitalWrite(LED,HIGH);
}

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(pinoLDRLow,INPUT);
  pinMode(pinoLDRHigh,INPUT);
  attachInterrupt(pinoLDRLow, turnLEDOn_ISR, RISING);
  attachInterrupt(pinoLDRHigh, turnLEDOff_ISR, FALLING);

 
}

void loop() {
}
