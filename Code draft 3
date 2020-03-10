
// circuit 1 button: button/LED A1
const int buttonPinA1 = 24; // button input = ORANGE
const int ledButtonPinA1 = 42; // LED output = YELLOW
const int photocellPinA1 = A0; // photocell separate circuit = 
int buttonA1Scored = false;
int buttonStateA1 = HIGH;
int prevButtonA1State = LOW;
int ledStateA1;
// circuit 2 button: photocell A1
int photocellA1 = 0;

// circuit 1 button: button/LED A2
const int buttonPinA2 = 26; // button input = ORANGE
const int ledButtonPinA2 = 44; // LED output = YELLOW
const int photocellPinA2 = A1; // photocell separate circuit = 
int buttonA2Scored = false;
int buttonStateA2 = HIGH;
int prevButtonA2State = LOW;
int ledStateA2;
// circuit 2 button: photocell A2
int photocellA2 = 0;

// circuit 1 button: button/LED A3
const int buttonPinA3 = 28; // button input = ORANGE
const int ledButtonPinA3 = 46; // LED output = YELLOW
const int photocellPinA3 = A2; // photocell separate circuit = 
int buttonA3Scored = false;
int buttonStateA3 = HIGH;
int prevButtonA3State = LOW;
int ledStateA3;
// circuit 2 button: photocell A3
int photocellA3 = 0;

// circuit 1 button: button/LED A4
const int buttonPinA4 = 30; // button input = ORANGE
const int ledButtonPinA4 = 48; // LED output = YELLOW
const int photocellPinA4 = A3; // photocell separate circuit = 
int buttonA4Scored = false;
int buttonStateA4 = HIGH;
int prevButtonA4State = LOW;
int ledStateA4;
// circuit 2 button: photocell A4
int photocellA4 = 0;

int wait = 50;
int threshold = 12;

void setup() {
  Serial.begin(9600);
  
  // A1
  pinMode(buttonPinA1, INPUT);
  pinMode(ledButtonPinA1, OUTPUT);
  digitalWrite(ledButtonPinA1, HIGH);

  // A2
  pinMode(buttonPinA2, INPUT);
  pinMode(ledButtonPinA2, OUTPUT);
  digitalWrite(ledButtonPinA2, HIGH);

  // A3
  pinMode(buttonPinA3, INPUT);
  pinMode(ledButtonPinA3, OUTPUT);
  digitalWrite(ledButtonPinA3, HIGH);

  // A4
  pinMode(buttonPinA4, INPUT);
  pinMode(ledButtonPinA4, OUTPUT);
  digitalWrite(ledButtonPinA4, HIGH);
  
}

void loop() {
  // A1 initially read photocell and button
  photocellA1 = analogRead(photocellPinA1);
  ledStateA1 = digitalRead(ledButtonPinA1);
  Serial.print(photocellA1);
  Serial.print("=A1. ");
  buttonStateA1 = digitalRead(buttonPinA1);

  // A2 initially read photocell and button
  photocellA2 = analogRead(photocellPinA2);
  ledStateA2 = digitalRead(ledButtonPinA2);
  Serial.print(photocellA2);
  Serial.print("=A2. ");
  buttonStateA2 = digitalRead(buttonPinA2);

  // A3 initially read photocell and button
  photocellA3 = analogRead(photocellPinA3);
  ledStateA3 = digitalRead(ledButtonPinA3);
  Serial.print(photocellA3);
  Serial.print("=A3. ");
  buttonStateA3 = digitalRead(buttonPinA3);

  // A4 initially read photocell and button
  photocellA4 = analogRead(photocellPinA4);
  ledStateA4 = digitalRead(ledButtonPinA4);
  Serial.print(photocellA4);
  Serial.print("=A4. ");
  Serial.println(" ");
  buttonStateA4 = digitalRead(buttonPinA4);

  // A1: If laser on the button, should signal PRESS_MEEEEE
  if(photocellA1 > threshold){
    if(!buttonA1Scored){ // 2 arrays: 1 for scored, 1 for output led pin
      digitalWrite(ledButtonPinA1, LOW);   // BLINK by turning ON then OFF then back ON
      delay(500);
      digitalWrite(ledButtonPinA1, HIGH);
      delay(500); 
      digitalWrite(ledButtonPinA1, LOW);
      ledStateA1 = LOW;
      Serial.println("A1 on + passed, ");
    }
  } else {
    if(!buttonA1Scored){ // not scored 
      digitalWrite(ledButtonPinA1, HIGH);
      ledStateA1 = HIGH;
      Serial.println("A1 not on, ");
    }
  } // A1: If button PRESS_MEEEE need to score++ and button should stay on
  if(ledStateA1 == LOW && buttonStateA1 == HIGH) {
    if(!buttonA1Scored){
      buttonA1Scored=true;
      Serial.println("A1 pressed");
    }
  }

  // A2: If laser on the button, should signal PRESS_MEEEEE
  if(photocellA2 > threshold){
    if(!buttonA2Scored){ // 2 arrays: 1 for scored, 1 for output led pin
      digitalWrite(ledButtonPinA2, LOW);   // BLINK by turning ON then OFF then back ON
      delay(500);
      digitalWrite(ledButtonPinA2, HIGH);
      delay(500); 
      digitalWrite(ledButtonPinA2, LOW);
      ledStateA2 = LOW;
      Serial.println("A2 on + passed, ");
    }
  } else {
    if(!buttonA2Scored){ // not scored 
      digitalWrite(ledButtonPinA2, HIGH);
      ledStateA2 = HIGH;
      Serial.println("A2 not on, ");
    }
  } //A2: If button PRESS_MEEEE need to score++ and button should stay on
  if(ledStateA2 == LOW && buttonStateA2 == HIGH) {
    if(!buttonA2Scored){
      buttonA2Scored=true;
      Serial.println("A2 pressed");
    }
  }

  // A3: If laser on the button, should signal PRESS_MEEEEE
  if(photocellA3 > threshold){
    if(!buttonA3Scored){ // 2 arrays: 1 for scored, 1 for output led pin
      digitalWrite(ledButtonPinA3, LOW);   // BLINK by turning ON then OFF then back ON
      delay(500);
      digitalWrite(ledButtonPinA3, HIGH);
      delay(500); 
      digitalWrite(ledButtonPinA3, LOW);
      ledStateA3 = LOW;
      Serial.println("A3 on + passed, ");
    }
  } else {
    if(!buttonA3Scored){ // not scored 
      digitalWrite(ledButtonPinA3, HIGH);
      ledStateA3 = HIGH;
      Serial.println("A3 not on, ");
    }
  } //A3: If button PRESS_MEEEE need to score++ and button should stay on
  if(ledStateA3 == LOW && buttonStateA3 == HIGH) {
    if(!buttonA3Scored){
      buttonA3Scored=true;
      Serial.println("A3 pressed");
    }
  }

  // A4: If laser on the button, should signal PRESS_MEEEEE
  if(photocellA4 > threshold){
    if(!buttonA4Scored){ // 2 arrays: 1 for scored, 1 for output led pin
      digitalWrite(ledButtonPinA4, LOW);   // BLINK by turning ON then OFF then back ON
      delay(500);
      digitalWrite(ledButtonPinA4, HIGH);
      delay(500); 
      digitalWrite(ledButtonPinA4, LOW);
      ledStateA4 = LOW;
      Serial.println("A4 on + passed, ");
    }
  } else {
    if(!buttonA4Scored){ // not scored 
      digitalWrite(ledButtonPinA4, HIGH);
      ledStateA4 = HIGH;
      Serial.println("A4 not on, ");
    }
  } //A4: If button PRESS_MEEEE need to score++ and button should stay on
  if(ledStateA4 == LOW && buttonStateA4 == HIGH) {
    if(!buttonA4Scored){
      buttonA4Scored=true;
      Serial.println("A4 pressed");
    }
  }


  delay(wait);
  prevButtonA1State = buttonStateA1;
  prevButtonA2State = buttonStateA2;
  prevButtonA3State = buttonStateA3;
  prevButtonA4State = buttonStateA4;
}

// tips: write function OR write in for loop - 
// 8 buttons looped for i = 1, until i = 8
