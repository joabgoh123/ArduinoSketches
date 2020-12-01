int ledPin = 13; // choose the pin for the LED
int inPin = 2;   // choose the input pin (for a pushbutton)
int val = 0;     // variable for reading the pin status

void setup() {
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inPin, INPUT);    // declare pushbutton as input
  digitalWrite(ledPin, LOW);
}

void loop(){
  val = digitalRead(inPin);  // read input value
  if (val == LOW) {         // check if the input is HIGH (button released)
      // turn LED OFF

  } else {
    
    start();  // turn LED ON
  }
}
void start() {
  digitalWrite(ledPin, HIGH);
}

 
