void foo(){
  Serial.println("inside foo");
}
int bar(){
  Serial.println("inside bar");
  return -1;
}

void setup() {
  // ternary operator
  Serial.begin(9600);
  int x = true ? 2:3;
  Serial.println(x);
  // question 
  int a = 4 > 3 ? 2 > 4 ? 2 : 4 : 3;
  Serial.println(a);

  int b = 5 > 2 ? 4 > 1 ? 5>7 ? 10 : 5 > 8 ? 6 > 2 ? 20 : 30 : 5 > 6 ? 40 : 50 : 7 > 2 ? 60 : 70 : 8 > 9 ? 80 : 90;
  Serial.println(b);


  // comma operator

  int y = (foo(), bar());
  Serial.println(y);

  // question
//  int i = 1;
//  int j ;
//  j = (i=i+8, i%5);
//  j = 2, 5;
//  Serial.println(j);

  //question
  int i = 0;
  int j ;
  j = (i=i+1, i=i+2, i=i+3);
  Serial.println(j);
}

void loop() {
  // put your main code here, to run repeatedly:

}
