const int ena = 10;
const int in1 = 8;
const int in2 = 9;
const int in3 = 11;
const int in4 = 12;
const int enb = 13;

void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enb, OUTPUT);
}

void loop() {
Serial.println("moveforward()");
moveforward();
Serial.println("movereverseturn()");
movereverseturn();
Serial.println("movestop()");
movestop();
}

void movereverseturn()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(ena, 150);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enb, 150);
  
  delay(100);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(ena, 150);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enb, 200);

  delay(10);
  }
 
void moveforward()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ena, 200);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enb, 200);
  }

void movestop()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ena, 0);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enb, 0);
  }
