void setup () 
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop()                  
 {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
   }
