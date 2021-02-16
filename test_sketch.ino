/*
 * Direct port manipulation on the ATmega8 with MiniCore
 * 8 MHz internal clock
 * LEDs are connected to the port B
 */

void setup()
{
  DDRB = 0xFF; // Set all the pins on the port B as output
}

void loop()
{
  for (byte i = 0; i < 8; i++)
  {
    byte portValue = 1 << i;
    PORTB = portValue; // Set the pins on the port B
    delay(portValue);
  }
}
