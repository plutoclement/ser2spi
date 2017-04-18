
unsigned long CODE=0;
int start=0;
unsigned long ID = 2153320780;// correspond to WR=0 : CS='01011001' ; ADD=17; DATA='01001100'



void setup(){

  Serial.begin(115200);
  //for (int i=1; i <= sizeof(CSpin); i++){pinMode(CSpin[i], OUTPUT);} // initialisation des pins de CS
  //for (int i=0; i <= sizeof(CSpin); i++){digitalWrite(CSpin[i], HIGH);} // monter les CS
  Serial.write('1');
  //Serial.flush(); //On vide le tampon
  
}

void loop(){


  ///////////// SERIAL RX /////////////


  while(Serial.available()<=0){
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
    delay(50);}
  CODE = Serial.parseInt(); 
  
  if (CODE==ID){
    digitalWrite(13, HIGH);
    while(1>0){}}
    
// if ID=CODE, the code stops after lighting up the LED on pin 13.
//If ID!= CODE, the code goes back to the beggining and led on pin 13 is blinking


}


