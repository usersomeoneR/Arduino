//Definieer de sensorPin en sluit hem aan op A5.
const int sensorPin = A5;

//Dit runt maar een keer.
void setup()
{
  //Zorg ervoor dat de berichten in de seriële monitor zo snel zijn.
  Serial.begin(9600);
}

//Dit runt oneindig door.
void loop()
{
  //Post deze string, lees de waarde van de sensorPin en zorg ervoor dat de standaard fromLow/High verandert naar de toLow/High.
  //
  Serial.print("De temperatuur is nu");
  Serial.println(map(analogRead(sensorPin), 0, 1023, 0, 500));
  delay(500);
}
