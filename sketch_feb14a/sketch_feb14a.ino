//setting up for motors
//Roght motors1   //motor 2       //left motrs 3     //motor 4
int EN1=9;       int EN2=8;       int EN3=6;         int EN4=7;
int in1=30;      int in3=34;      int in5=22;        int in7=26;
int in2=32;      int in4=36;      int in6=24;        int in8=28;
void setup() {
   

  //Rigth motor 1
pinMode(EN1,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
//motor 2
pinMode(EN2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

//left motors
//MOTOR 3 
pinMode(EN3,OUTPUT);
pinMode(in5,OUTPUT);
pinMode(in6,OUTPUT); 
// motor 4 
pinMode(EN4,OUTPUT);
pinMode(in7,OUTPUT);
pinMode(in8,OUTPUT);
}

void moveforward(int R,int L){
   analogWrite(EN1,R);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
   analogWrite(EN2,R);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

   analogWrite(EN3,L);
  digitalWrite(in5,HIGH);
  digitalWrite(in6,LOW);
   analogWrite(EN4,L);
  digitalWrite(in7,HIGH);
  digitalWrite(in8,LOW);
 
  }
  void movebackwards(int e){
    analogWrite(EN1,e);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(EN2,e);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);

  analogWrite(EN3,e);
  digitalWrite(in5,LOW);
  digitalWrite(in6,HIGH);
   analogWrite(EN4,e);
  digitalWrite(in7,LOW);
  digitalWrite(in8,HIGH);
  }
  void turnrigth(int R,int L){
  analogWrite(EN1,R);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
   analogWrite(EN2,R);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

   analogWrite(EN3,L);
  digitalWrite(in5,LOW);
  digitalWrite(in6,HIGH);
   analogWrite(EN4,L);
  digitalWrite(in7,LOW);
  digitalWrite(in8,HIGH);
}
  
  
