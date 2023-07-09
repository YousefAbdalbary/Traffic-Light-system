int green=13;
int yellow=11;
int red=9;
int x ;

int on = 1000;
int off= 1000;
void setup(){

  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);


}
void loop(){
	digitalWrite(green,HIGH); delay(on);
    digitalWrite(yellow,HIGH);delay(on);
    digitalWrite(yellow,LOW);delay(off);
    digitalWrite(yellow,HIGH);delay(on);
    digitalWrite(yellow,LOW);delay(off);
    digitalWrite(yellow,HIGH);delay(on);
    digitalWrite(yellow,LOW);
  
digitalWrite(green,LOW); 

    
digitalWrite(red,HIGH); delay(on);

digitalWrite(red,LOW);  delay(off);


  
}