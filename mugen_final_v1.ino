
// circuit 1 button: button/LED A1
const int buttonPinA1 = 24; // button input = ORANGE
const int ledButtonPinA1 = 42; // LED output = YELLOW
const int photocellPinA1 = A0; // photocell separate circuit = 
int buttonA1Scored = false;
int buttonStateA1 = HIGH;
int prevButtonA1State = LOW;
int ledStateA1;
// circuit 2 button: photocell
int photocellA1 = 0;

int wait = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPinA1, INPUT);
  pinMode(ledButtonPinA1, OUTPUT);
  digitalWrite(ledButtonPinA1, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  photocellA1 = analogRead(photocellPinA1);
  ledStateA1 = digitalRead(ledButtonPinA1);
  Serial.print(photocellA1);
  Serial.print(", ");
  
  buttonStateA1 = digitalRead(buttonPinA1);

  //If laser on the button, should signal PRESS_MEEEEE
  if(photocellA1 > 950){
    if(!buttonA1Scored){ // 2 arrays: 1 for scored, 1 for output led pin
      digitalWrite(ledButtonPinA1, LOW);   // BLINK by turning ON then OFF then back ON
      delay(500);
      digitalWrite(ledButtonPinA1, HIGH);
      delay(500); 
      digitalWrite(ledButtonPinA1, LOW);
      ledStateA1 = LOW;
      Serial.println("on + passed, ");
    }
  } else {
    if(!buttonA1Scored){ // not scored 
      digitalWrite(ledButtonPinA1, HIGH);
      ledStateA1 = HIGH;
      Serial.println("not on, ");
    }
  }

  //If button PRESS_MEEEE need to score++ and button should stay on
  if(ledStateA1 == LOW && buttonStateA1 == HIGH) {
    if(!buttonA1Scored){
      buttonA1Scored=true;
      Serial.println("pressed");
    }
  }


  //delay(50);
  prevButtonA1State = buttonStateA1;
}

// tips: write function OR write in for loop - 
// 8 buttons looped for i = 1, until i = 8
