void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  int a = 10.6; //int
  char b = 'c';
  double d = 10.356;
  float f = 65.89;
  char c[] = "programming";

  Serial.println(a+d);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
}

void loop() {
  // put your main code here, to run repeatedly:

}
