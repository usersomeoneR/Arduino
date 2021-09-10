
//Definieer de Pins die ik ga gebruiken als constant int.
const int ledPin11 = 11;
const int ledPin12 = 12;
const int ledPin10 = 10;
const int ledPin9 = 9;
const int ledPin8 = 8;
const int ledPin7 = 7;
const int ledPin6 = 6;
const int ledPin5 = 5;

//Deze draait maar 1x.
void setup() {
  //Instantieer de Pins die ik ga gebruiken en of het een
  //input of een output is.
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

//Deze draait voor altijd (loop).
void loop() {
  //Je schrijft een hoge (aan) of lage (uit) waarde aan de ingevoerde Pins.
  //Ik zet tussen elk "uit- en aangaan" van een Pin een delay van 0,1 seconde.
  //Deze beschrijving geldt voor elke pin hieronder.
  digitalWrite(ledPin11, HIGH);
  delay(100);
  digitalWrite(ledPin11, LOW);

  delay(100);
  digitalWrite(ledPin12, HIGH);
  delay(100);
  digitalWrite(ledPin12, LOW);
  
  delay(100);
  digitalWrite(ledPin10, HIGH);
  delay(100);
  digitalWrite(ledPin10, LOW);
  
  delay(100);
  digitalWrite(ledPin9, HIGH);
  delay(100);
  digitalWrite(ledPin9, LOW);
  
  delay(100);
  digitalWrite(ledPin8, HIGH);
  delay(100);
  digitalWrite(ledPin8, LOW);
  
  delay(100);
  digitalWrite(ledPin7, HIGH);
  delay(100);
  digitalWrite(ledPin7, LOW);
  
  delay(100);
  digitalWrite(ledPin6, HIGH);
  delay(100);
  digitalWrite(ledPin6, LOW);
  delay(100);
  
  digitalWrite(ledPin5, HIGH);
  delay(100);
  digitalWrite(ledPin5, LOW);
  delay(100);
  
  digitalWrite(ledPin6, HIGH);
  delay(100);
  digitalWrite(ledPin6, LOW);
  delay(100);
  
  digitalWrite(ledPin7, HIGH);
  delay(100);
  digitalWrite(ledPin7, LOW);
  delay(100);
  
  digitalWrite(ledPin8, HIGH);
  delay(100);
  digitalWrite(ledPin8, LOW);
  delay(100);
  

  digitalWrite(ledPin9, HIGH);
  delay(100);
  digitalWrite(ledPin9, LOW);

  delay(100);
  digitalWrite(ledPin10, HIGH);
  delay(100);
  digitalWrite(ledPin10, LOW);
  
  delay(100);
  digitalWrite(ledPin12, HIGH);
  delay(100);
  digitalWrite(ledPin12, LOW);
}
