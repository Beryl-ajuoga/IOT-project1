// C++ code
//

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3.3, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(1,LOW) ;
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(3.3,HIGH);
  delay(1000); //Wait for 1000 millisecond(s)
  digitalWrite(3.3,LOW);
  delay(1000);//Wait for 1000 millisecond(s)
  
  
}