//Voorbeeld van Thomas

//Regel de snelheid van het knipperen van de LED met de instelling van de potmeter

const int potPin = A5;     //Sluit de potmeter aan op pin A5
const int ledPin = 8;   //Sluit de LED aan op pin 10
  int potmeterWaarde = 0; //De startwaarde voor de potmeter is 0

void setup(){
  pinMode (ledPin, OUTPUT); 
}

void loop(){
  //Zet de analoge waarde om in een waarde tussen 0 en 1023 en
  //schrijf deze waarde naar de variabele potmeterwaarde
  
  potmeterWaarde = analogRead(potPin);
  
  int lowPotmeter = map(potmeterWaarde, 0, 1023, 0, 500);
  //const int highPotmeter = map(501, 0, 1023, 0, 500);
  

    digitalWrite(ledPin, HIGH); // Zet de LED aan
    digitalWrite(ledPin, LOW); //Zet de LED uit
    delay(lowPotmeter);     //Zet een delay van 0
  
}
