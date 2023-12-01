void setup ()  
{  
pinMode ( 13, OUTPUT);  // to set the OUTPUT mode of pin number 13.  
}  
void loop ()  
{  
digitalWrite (13, HIGH);   
delay (3000);  // 4 seconds = 4 x 1000 milliseconds  
digitalWrite (13, LOW);  
delay (1500);  // 1.5 seconds = 1.5 x 1000 milliseconds  
}  