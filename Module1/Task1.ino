int ledPin = 13;// LED 
int ledPin1 = 12;
int pirPin = 2;                 // PIR Out pin 
int pirStat = 0;                   // PIR status
void setup() {
 pinMode(ledPin, OUTPUT);  
 pinMode(ledPin1, OUTPUT);  
 pinMode(pirPin, INPUT);     
 
 Serial.begin(9600);
}
void loop(){
 pirStat = digitalRead(pirPin); 
 if (pirStat == HIGH) {            // if motion detected
   digitalWrite(ledPin, HIGH);  // turn Red LED ON
   digitalWrite(ledPin1, LOW);
   Serial.println("Motion Detected");
 }
 if (pirStat == LOW) {        // if motion not detected
   digitalWrite(ledPin, LOW);
   digitalWrite(ledPin1, HIGH);  // turn Yello LED ON
   Serial.println("No Motion");
  }
}
