 // SVR-05-D Humidity & Temperature sensor
 
 void setup() {
  Serial.begin(9600) ;
 }

void loop() {
  float temp = analogRead(A0) ;
  float humid = analogRead(A1) ;
  temp = (temp/1023.*5.)*33.3 ; // 5V, slope=33.3
  humid = (humid/1023.*5.)*33.3 ;

  Serial.print(" temp = ") ;
  Serial.print (temp, 0) ;
  Serial.print("   humid = ") ;
  Serial.println (humid, 0) ;
  delay(500) ;
}
