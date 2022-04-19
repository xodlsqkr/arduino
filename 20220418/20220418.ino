int cds = A1;
int LED = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(cds,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cdsValue = analogRead(A1);
  Serial.println(cdsValue);
  if(cdsValue<966){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
  delay(1000);
}
