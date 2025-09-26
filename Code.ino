int pin[8] = {2,3,4,5,6,7,12}; 

int segment[10][8] = { 
  {1,1,1,1,1,1,0,0},  
  {0,1,1,0,0,0,0,0},  
  {1,1,0,1,1,0,1,0},  
  {1,1,1,1,0,0,1,0},  
  {0,1,1,0,0,1,1,0},  
  {1,0,1,1,0,1,1,0},  
  {1,0,1,1,1,1,1,0},  
  {1,1,1,0,0,0,0,0},  
  {1,1,1,1,1,1,1,0},  
  {1,1,1,1,0,1,1,0},  
};
const float BETA = 3950;

void setup() {
  for (int i = 0; i <= 7; i++) {
    pinMode(pin[i], OUTPUT);
    digitalWrite(pin[i], LOW);
  }
  pinMode(8, OUTPUT);   
  pinMode(9, OUTPUT);   
  pinMode(10, OUTPUT);   
  pinMode(11, OUTPUT);  
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(A0);
  float celsius = 1 / (log(1 / (1023. / analogValue - 1)) / BETA + 1.0 / 298.15) - 273.15;
  Serial.print("Temperature: ");
  Serial.print(celsius);
  Serial.println(" ℃");
  delay(1000);
  int temp = celsius*100;
    int a = temp / 1000;               
    int b = (temp / 100) % 10;         
    int c = (temp / 10) % 10;          
    int d = temp % 10;               
    for (int t = 0; t < 100; t++) {
      digitalWrite(8, LOW);
      for (int i = 0; i <= 7; i++){
        digitalWrite(pin[i], segment[a][i]);
      }
      delay(5);
      digitalWrite(8, HIGH); 
      clear();
      digitalWrite(9, LOW);
      for (int i = 0; i <= 7; i++){
        digitalWrite(pin[i], segment[b][i]);
      }
      delay(5);
      digitalWrite(9, HIGH); 
      clear();
      digitalWrite(10, LOW);  
      for (int i = 0; i <= 7; i++) {
        digitalWrite(pin[i], segment[c][i]);
      }
      delay(5);
      digitalWrite(10, HIGH); 
      clear();
      digitalWrite(11, LOW);   
      for (int i = 0; i <= 7; i++) {
        digitalWrite(pin[i], segment[d][i]);
      }
      delay(5);
      digitalWrite(11, HIGH);  
      clear();
    }
  }
 void clear() {
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pin[i], LOW);
  }
} 
