
int sum(int a, int b){
  
  return (a+b) + (a-b);
}
int b = 50;
void setup() {
  // put your setup code here, to run once:
  int a = 10;
  Serial.begin(9600);
  Serial.println(sum(a, b));
  
  Serial.println(b);
}

void loop() {
  // put your main code here, to run repeatedly:
}
