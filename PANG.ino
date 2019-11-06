const int buttonone = PIN_PC0;    
const int buttontwo = PIN_PC1;        

int buttonStateone = 0 ;
int buttonStatetwo = 0 ;         
void setup() {
  Serial.begin(9600);
  

    
 
 pinMode(buttonone, INPUT);
 
 pinMode(buttontwo, INPUT);   
}

void loop(){

 buttonStateone = digitalRead(buttonone);
 
 buttonStatetwo = digitalRead(buttontwo);

  if (buttonStateone == LOW) {    
   
   
   Serial.print(buttonStateone);  
   Serial.println("R");
   delay(500); 
 }
 else {       }
 if (buttonStatetwo == LOW) {     


   Serial.print(buttonStatetwo);  
   Serial.println("L");
   delay(500);      
 }
 else { }
}
