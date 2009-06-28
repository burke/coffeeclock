int coffeeButton = 9;
int command      = 0;

void setup()
{
  pinMode(coffeeButton, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    command = Serial.read();
    switch (command)
    {
    case 'a':
      digitalWrite(coffeeButton, HIGH);
      break;
    case 'b':
      digitalWrite(coffeeButton, LOW);
      break;
    case 'c':
      //digitalWrite(steamButton, HIGH);
      break;
    case 'd':
      //digitalWrite(steamButton, LOW);
      break;
    }
  }
}
