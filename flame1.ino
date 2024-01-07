#define dijiPin 2
#define buzzerPin 4  
#define ledPin 5      

void setup() {
  Serial.begin(9600);
  pinMode(dijiPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  int dijiDeger = digitalRead(dijiPin);
  
  if (dijiDeger == LOW) {
    Serial.println("Yangın Var");
    
    digitalWrite(buzzerPin, HIGH);  
    digitalWrite(ledPin, HIGH);
    delay(500);
    
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  } else {
    Serial.println("Durum Stabil");
    
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  // Biraz beklet
  delay(100);
}
