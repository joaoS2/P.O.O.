int sensorPin = A0; // pino do sensor de luminosidade
int ledPin = 0; // pino do LED
int threshold = 600; // valor de limiar do sensor de luminosidade

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // configura a taxa de transmissão serial
}

void loop() {
  int sensorValue = analogRead(sensorPin); // lê o valor do sensor de luminosidade
  Serial.println(sensorValue); // exibe o valor do sensor no monitor serial
  if (sensorValue < threshold) { // se a luminosidade for menor que o limiar
    digitalWrite(ledPin, HIGH); // acende o LED
  } else { // caso contrário
    digitalWrite(ledPin, LOW); // apaga o LED
  }
  delay(100); // aguarda 100ms antes de ler novamente o sensor
}