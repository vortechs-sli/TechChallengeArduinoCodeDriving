
/**
    BasicBot - The basic working bot.

    Part of the Asimi project - http://sudarmuthu.com/arduino/asimi

   Copyright 2011  Sudar Muthu  (email : sudar@sudarmuthu.com)
   
   **/

#define E1 5  // Enable Pin for motor 1
#define E2 4  // Enable Pin for motor 2

#define I1 3  // Control pin 1 for motor 1
#define I2 2  // Control pin 2 for motor 1
#define I3 1  // Control pin 1 for motor 2
#define I4 0  // Control pin 2 for motor 2

void setup() {

    pinMode(E1, OUTPUT);
    pinMode(E2, OUTPUT);
//
    pinMode(I1, OUTPUT);
    pinMode(I2, OUTPUT);
    pinMode(I3, OUTPUT);
    pinMode(I4, OUTPUT);
//
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
//
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);

}

void loop() {

    // off ten seconds
    digitalWrite(E1, LOW);
    digitalWrite(E2, LOW);
    delay(10000);

    // drive forward
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);
    delay(10000);

    // off ten seconds
    // time for bridge to be lowered
    digitalWrite(E1, LOW);
    digitalWrite(E2, LOW);
    delay(10000);

    // drive forward
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);
    delay(10000);
    
    // off ten seconds
    // time for bridge to be raised
    digitalWrite(E1, LOW);
    digitalWrite(E2, LOW);
    delay(10000);

    // drive forward
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);
    delay(10000);
    
    // turn 180
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
    digitalWrite(I1, LOW);
    digitalWrite(I2, HIGH);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);
    delay(10000);

    // drive backward
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
    digitalWrite(I1, LOW);
    digitalWrite(I2, HIGH);
    digitalWrite(I3, LOW);
    digitalWrite(I4, HIGH);
    delay(10000);

    // off ten seconds
    // time for bridge to be lowered
    digitalWrite(E1, LOW);
    digitalWrite(E2, LOW);
    delay(10000);

    // drive backward
    digitalWrite(E1, HIGH);
    digitalWrite(E2, HIGH);
    digitalWrite(I1, LOW);
    digitalWrite(I2, HIGH);
    digitalWrite(I3, LOW);
    digitalWrite(I4, HIGH);
    delay(10000);

    // off ten seconds
    // time for bridge to be raised
    digitalWrite(E1, LOW);
    digitalWrite(E2, LOW);
    delay(10000);
}

