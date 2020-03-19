int redPin = 13;     
int greenPin = 12;   
int bluePin = 7;    

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin, OUTPUT);
  

}

void loop() {
    
  digitalWrite(redPin, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(redPin, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)


}