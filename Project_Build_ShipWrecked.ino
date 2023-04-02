//A
const int buttonAPin = 2;
int buttonAState = 0;
int lastButtonAState = 0;
bool A = false;

//B
const int buttonBPin = 3;
int buttonBState = 0;
int lastButtonBState = 0;
bool B = false;

void setup() {
  pinMode(buttonAPin, INPUT);
  pinMode(buttonBPin, INPUT);
  Serial.begin(9600);
  Serial.println("Part A Begin");
}

void loop() {
 buttonAState = digitalRead(buttonAPin);

 //Button A Read
 if (buttonAState != lastbuttonAState) {
   if (buttonAState == HIGH) {
     A = true;
     Serial.println("Part B Begin");
   }
 }
 //A true = B read
 if (A == true) {
   buttonBState = digitalRead(buttonBPin);
   if (buttonBState != lastButtonBState) {
     if (buttonBState == HIGH) {
       B = true;
     }
   }
 }
 if (B == true) {
   Serial.println("Beware of Unchartered Waters");
 }
}

lastButtonAState = buttonAState;
lastButtonBState = buttonBState;
