int led=7;
int buttonpin=8;
int buttonstate=0;
void setup()
{
 pinMode(buttonpin, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  buttonstate=digitalRead(buttonpin);
    if(buttonstate==HIGH)
 {
  digitalWrite(led, HIGH);
  delay(1000);
 }
 else
{
   digitalWrite(led, LOW);
  delay(1000); 
 }
}