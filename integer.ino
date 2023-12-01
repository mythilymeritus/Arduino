int Sum = 0;  
void setup( )  
{  
Serial.begin(9600);  
}  
void loop ( )  
{  
Sum++;  
Serial.println ( Sum);  
delay(1500);  
}   
