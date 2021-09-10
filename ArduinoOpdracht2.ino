//Definieer de Pins die ik ga gebruiken als constant int.
const int ledPin = 11;
const int knopPin = 10;
  //Zet de waarde van de statusknop sowieso op 0.
  int statusKnop = 0;

//Deze draait maar 1x.
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(knopPin, INPUT);
}

//Deze draait voor altijd (loop).
void loop() {
  //Hier lees ik de waarde van de knop. Deze wordt opgehaald.
  //Haal status van button op. Is HIGH or LOW

  //Check of de waarde van de knop ingedrukt (HIGH) is.
  if(digitalRead(knopPin) == HIGH){
    //Als de statusknop gelijk aan nul is, zet hem dan op 1. Zet daarbij het lampje aan.
    if(statusKnop == 0){
      statusKnop = 1;
      digitalWrite(ledPin, HIGH); //Zet het lampje uit
    }
    //Als de statusknop alles behalve gelijk aan nul is, zet hem dan op 0. Zet daarna het lampje uit.
    else{
      statusKnop = 0;
      digitalWrite(ledPin, LOW); //Zet het lampje uit.
    }
    //Wacht 450ms.
    delay(450);
  }
}
