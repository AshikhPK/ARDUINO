const int tempSensorpin=A0;
const int buzz = 8;
const float tempTh=25.0;
int sensorValue;
float temperature;


void setup() {
  Serial.begin(9600);
  pinMode(buzz,LOW);
  digitalWrite(buzz,LOW);

}

void loop() {
  sensorValue=analogRead(tempSensorpin);
  temperature=sensorValue*(3.0/1023.0)*10;
  Serial.print("Temperature: ");
  Serial.println(temperature);

if(temperature>tempTh){
  digitalWrite(buzz,HIGH);
  
  }
else
{
  digitalWrite(buzz,LOW);
  
  }
  delay(100);
}
