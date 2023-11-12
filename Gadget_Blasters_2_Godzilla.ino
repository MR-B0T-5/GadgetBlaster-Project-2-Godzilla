
// constants won't change. They're used here to set pin numbers:

//setup scene 1
const int buttonPin = 2;  // the number of the pushbutton pin
int buttonAState = 0;
int lastButtonAState= 0;
//setuo scene 2
const int buttonPin = 3;  // the number of the pushbutton pin
int buttonBState = 0;
int lastButtonBState= 0;
//setup scene 3
const int buttonPin = 4;  // the number of the pushbutton pin
int buttonCState = 0;
int lastButtonCState= 0;
const int ledPin = 13;    // the number of the LED pin
const int ledPin = 12;    // the number of the LED pin
const int ledPin = 11;    // the number of the LED pin
//setup scene 4
const int buttonPin = 5;  // the number of the pushbutton pin
int buttonDState = 0;
int lastButtonDState= 0;
const int ledPin = 10;    // the number of the LED pin


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonAState == HIGH) {
    // turn LED on:
    digitalWrite();
  } else {
    // turn LED off:
    digitalWrite();
  }

  if (buttonBState == HIGH) {
    // turn LED on:
    digitalWrite();
  } else {
    // turn LED off:
    digitalWrite();
  }

  if (buttonCState == HIGH) {
    // turn LED on:
    digitalWrite();
  } else {
    // turn LED off:
    digitalWrite();
  }

  if (buttonDState == HIGH) {
    // turn LED on:
    digitalWrite();
  } else {
    // turn LED off:
    digitalWrite();
  }
}
