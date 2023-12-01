int a ;  
int b ;  
float c ;  
void setup ( )  
{  
Serial.begin (9600);  
}  
void loop ( )  
{  
a = 3 ;  
b = a/2 ;  // b is an integer. It cannot hold fractions. The output will be 1.  
c = (float) a / 2.0 ;  // c now contains 1.5.  
// Here, we have to use 2.0 instead of 2.  
 Serial.print("a: ");
  Serial.print(a);
  Serial.print(" | b: ");
  Serial.print(b);
  Serial.print(" | c: ");
  Serial.println(c);
}
  