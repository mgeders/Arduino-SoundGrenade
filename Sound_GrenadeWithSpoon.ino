/*
  Sounds Horn for 5 seconds after 4 second delay
  Use single A23 (12v) battery to power Arduino and Horn circuit portion
  The device will continually sound until powered off (so you don't lose it)
  The device is intended to be stored and carried with the power off
  The spoon must be depressed while the device is powered on.  This is analogous to pulling the pin but not throwing it.  The boot time is minimal.
  
  25 JUNE, 2017
  by Matt Geders
*/

int HornRelay =5;                   // set pin 5 to HornRelay switch
int Spoon =9;                       // set pin 9 to Spoon switch (normally open)
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);   
  pinMode(HornRelay, OUTPUT);
  pinMode(Spoon, INPUT);
}

void loop(){
if (digitalRead(Spoon) == HIGH){      // If the spoon button is released at power on...

// the loop function runs over and over again forever

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(4000);                       // wait for a 4 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(HornRelay, HIGH);     // Open the horn relay circuit which sounds the horn 
  delay(5000);                       // wait for a 5 seconds (horn still sounds)
  digitalWrite(HornRelay, LOW);      // Snut the horn relay circuit which silences the horn
}
}
