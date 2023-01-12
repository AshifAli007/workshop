void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Questions on operators
//  int x, y = 5, z = 5; 
//  x = !(y == z);
//  Serial.println(x);


  int a = 1;
  int b = 1;
  int c = a || --b; 
  int d = a-- && --b; 
  
  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
   
}

void loop() {
  // put your main code here, to run repeatedly:

}
