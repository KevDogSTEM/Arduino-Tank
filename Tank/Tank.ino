int LeftFwd =3;
int LeftBwd =5;
int RightBwd =6;
int RightFwd =9;


void setup() {
 
pinMode (LeftFwd,OUTPUT);
pinMode (LeftBwd,OUTPUT);
pinMode (RightBwd,OUTPUT);
pinMode (RightFwd,OUTPUT);
delay(1000);
}

void loop() {
int spd = 500;
  forwards();
  delay(spd+500);
  AllStop();
  delay(spd);
  rightTrn();
  delay(spd-250);
 

}

int forwards()
{
digitalWrite(LeftFwd,HIGH);
digitalWrite(LeftBwd,LOW);
digitalWrite(RightBwd,LOW);
digitalWrite(RightFwd,HIGH);

}

int backwards()
{
digitalWrite(LeftFwd,LOW);
digitalWrite(LeftBwd,HIGH);
digitalWrite(RightBwd,HIGH);
digitalWrite(RightFwd,LOW);
}

int rightTrn()
{
digitalWrite(LeftFwd,LOW);
digitalWrite(LeftBwd,LOW);
digitalWrite(RightBwd,HIGH);
digitalWrite(RightFwd,LOW);
}

int leftTrn()
{
digitalWrite(LeftFwd,LOW);
digitalWrite(LeftBwd,HIGH);
digitalWrite(RightBwd,LOW);
digitalWrite(RightFwd,LOW);
}

int AllStop()
{
digitalWrite(LeftFwd,LOW);
digitalWrite(LeftBwd,LOW);
digitalWrite(RightBwd,LOW);
digitalWrite(RightFwd,LOW);
}
