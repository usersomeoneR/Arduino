//Definieer de Pins die ik ga gebruiken als constant int.
  int redPin = 11;
  int bluePin = 10;
  int greenPin = 9;
  
  const int knopPin = 8;


//Deze draait maar 1x.
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(knopPin, OUTPUT);
  
}

//Deze draait altijd (loop).
void loop()
{
  //Als de statusknop gelijk is aan nul, zet het lampje aan.
  if(digitalRead(knopPin) == HIGH){
      
    //Rode kleur
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  //Wacht 500miliseconden
  delay(500);
  
  //Groene kleur
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  //Wacht 500miliseconden
  delay(500);
  
  //Blauwe kleur
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  //Wacht 500miliseconden
  delay(500);
  
  //Geel kleur
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  //Wacht 500miliseconden
  delay(500);
  
  //Cyan kleur
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  //Wacht 500miliseconden
  delay(500);
  
  //Roze kleur
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  //Wacht 500miliseconden
  delay(500);
  
  //Witte kleur
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  //Wacht 500miliseconden
  delay(500);
    
    //Ga nu uit
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  
}
