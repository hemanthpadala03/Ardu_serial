int x=1;
int y=3;
int z=5;
int DL=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=x+4;
  y=y+6;
  z=z+5;
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(z);
  delay(DL);
}
