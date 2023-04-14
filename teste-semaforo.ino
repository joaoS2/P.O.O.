int pushButton = 2; 
int redLedA = 13; 
int greenLedP = 10;

int yellowLedA = 12;
int yellowLedP = 8;

int greenLedA = 11;
int redLedP = 7;

bool estadoLed = 0; 

void setup()
{
  pinMode(pushButton, INPUT_PULLUP); 
  pinMode(redLed, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  if (digitalRead(pushButton) == (13, LOW) and digitalRead(pushButton) == (10, LOW)) 
  {
    estadoLed = !estadoLed; 
    digitalWrite(redLed, estadoLed);
    while (digitalRead(pushButton) == LOW);

    //Ativar vermelho
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);


    //Pisca amarelo
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);

    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    delay(1000);

    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);

    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    delay(1000);

    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);

    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    delay(1000);

    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);

    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    delay(1000);

    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);

    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    delay(1000);


    //Ativa verde
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    delay(10000);
    digitalWrite(11, LOW);
    digitalWrite(7, LOW);
    delay(10000);
    

  }
}