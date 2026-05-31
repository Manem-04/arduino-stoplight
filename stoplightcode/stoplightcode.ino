//Define the pins configuration
//For Road 1
int red1 = 2;
int yellow1 = 3;
int green1 = 4; 

// For Road 2
int red2 = 5;
int yellow2 = 6;
int green2 = 7; 

// For Road 3
int red3 = 8;
int yellow3 = 9;
int green3 = 10; 

// For Road 4
int red4 = 11;
int yellow4 = 12;
int green4 = 13; 


void setup() {
// To set pin as output or input
pinMode(red1,OUTPUT);
pinMode(yellow1,OUTPUT);  
pinMode(green1,OUTPUT);  
pinMode(red2,OUTPUT);
pinMode(yellow2,OUTPUT);  
pinMode(green2,OUTPUT);  
pinMode(red3,OUTPUT);
pinMode(yellow3,OUTPUT);  
pinMode(green3,OUTPUT);  
pinMode(red4,OUTPUT);
pinMode(yellow4,OUTPUT);  
pinMode(green4,OUTPUT);  

}

void case1() {
  // road 1 green high, other road red high
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, HIGH);
  
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  
  digitalWrite(red3, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, LOW);
  
  digitalWrite(red4, HIGH);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, LOW);
}
void case2() {
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(green1, LOW);
  
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  
  digitalWrite(red3, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, LOW);
  
  digitalWrite(red4, HIGH);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, LOW);
}

// Function to turn on green light for direction 2
void case3() {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(red3, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, LOW);
  digitalWrite(red4, HIGH);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, LOW);
}

// Function for yellow light for direction 2
void case4() {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(green2, LOW);
  digitalWrite(red3, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, LOW);
  digitalWrite(red4, HIGH);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, LOW);
}

// Function to turn on green light for direction 3
void case5() {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(red3, LOW);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, HIGH);
  digitalWrite(red4, HIGH);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, LOW);
}

// Function for yellow light for direction 3
void case6() {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(red3, LOW);
  digitalWrite(yellow3, HIGH);
  digitalWrite(green3, LOW);
  digitalWrite(red4, HIGH);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, LOW);
}

// Function to turn on green light for direction 4
void case7() {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(red3, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, LOW);
  digitalWrite(red4, LOW);
  digitalWrite(yellow4, LOW);
  digitalWrite(green4, HIGH);
}

// Function for yellow light for direction 4
void case8() {
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(red3, HIGH);
  digitalWrite(yellow3, LOW);
  digitalWrite(green3, LOW);
  digitalWrite(red4, LOW);
  digitalWrite(yellow4, HIGH);
  digitalWrite(green4, LOW);
}

void loop() {
  case1();  // Green light for direction 1
  delay(5000);  // Wait for 5 seconds
  
  case2();  // Yellow light for direction 1
  delay(3000);  // Wait for 2 seconds
  
  case3();  // Green light for direction 2
  delay(5000);  // Wait for 5 seconds
  
  case4();  // Yellow light for direction 2
  delay(3000);  // Wait for 2 seconds
  
  case5();  // Green light for direction 3
  delay(5000);  // Wait for 5 seconds
  
  case6();  // Yellow light for direction 3
  delay(3000);  // Wait for 2 seconds
  
  case7();  // Green light for direction 4
  delay(5000);  // Wait for 5 seconds
  
  case8();  // Yellow light for direction 4
  delay(3000);  // Wait for 2 seconds
}