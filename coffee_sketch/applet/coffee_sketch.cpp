
#include "WProgram.h"
void setup();
void loop();
int reservoir1 = 9;
//int reservoir2 = 9;
int command    = 0;

void setup()
{
  pinMode(reservoir1, OUTPUT);
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
      digitalWrite(reservoir1, HIGH);
      break;
    case 'b':
      digitalWrite(reservoir1, LOW);
      break;
    }
  }
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

