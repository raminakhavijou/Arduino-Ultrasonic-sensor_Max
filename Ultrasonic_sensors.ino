const int trigPin1 = 9; // Trigger pin for sensor 1
const int echoPin1 = 10; // Echo pin for sensor 1

const int trigPin2 = 4; // Trigger pin for sensor 2
const int echoPin2 = 5; // Echo pin for sensor 2
long duration;
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Measure distance from sensor 1
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1 / 2) / 29.1;

  // Measure distance from sensor 2
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2 / 2) / 29.1;

  // Send data to the computer
  
  Serial.println(distance1);
  //Serial.println(distance2);

  delay(10); // Adjust delay as needed
}
