const int potPin = A5;     //Sluit de potmeter aan op pin A5

const int ledPin12 = 12;   //Sluit de LED aan op pin 12
const int ledPin11 = 11;  //Sluit de LED aan op pin 11
const int ledPin10 = 10;  //Sluit de LED aan op pin 10
const int ledPin9 = 9;    //Sluit de LED aan op pin 9
const int ledPin8 = 8;    //Sluit de LED aan op pin 8
const int ledPin7 = 7;    //Sluit de LED aan op pin 7
const int ledPin6 = 6;    //Sluit de LED aan op pin 6

int potmeterWaarde = 0; //De startwaarde voor de potmeter is 0!

//Deze draait maar 1x.
void setup(){
  Serial.begin(9600); //Hoe snel de berichten binnen komen.
  pinMode (ledPin12, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  pinMode (ledPin11, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  pinMode (ledPin10, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  pinMode (ledPin9, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  pinMode (ledPin8, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  pinMode (ledPin7, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  pinMode (ledPin6, OUTPUT); //Zorgt ervoor dat de Pin een Output is.
  
}

//Deze loopt oneindig door.
void loop(){
  //Lees de waarde van de potPin af.
  potmeterWaarde = analogRead(potPin);
  
  //Print deze string en waarde.
  Serial.print("De waarde is nu");
  Serial.println(potmeterWaarde);
  //Wacht 500 miliseconden.
  delay(500);
  
  //Schrijf een HIGH (aan) of LOW (uit) value naar de LED.
  //Map zorgt ervoor dat de uitgelezen potPin value fromHigh en fromLow omgeschreven wordt naar een nieuwe
  //toHigh en toLow. De oorspronkelijke 0 en 100 worden: 0 en 1. Deze zijn dus in principe LOW en HIGH.
  digitalWrite(ledPin12, map(analogRead(potPin), 0, 100, 0, 1));
  digitalWrite(ledPin11, map(analogRead(potPin), 0, 200, 0, 1));
  digitalWrite(ledPin10, map(analogRead(potPin), 0, 300, 0, 1));
  digitalWrite(ledPin9, map(analogRead(potPin), 0, 400, 0, 1));
  digitalWrite(ledPin8, map(analogRead(potPin), 0, 500, 0, 1));
  digitalWrite(ledPin7, map(analogRead(potPin), 0, 600, 0, 1));
  digitalWrite(ledPin6, map(analogRead(potPin), 0, 700, 0, 1));
  
}
