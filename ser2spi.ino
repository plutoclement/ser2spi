
unsigned long CODEint=0;

// 2153320780 correspond to WR=0 : CS='01011001' ; ADD=17; DATA='01001100'

char CODEbin[32];
int WR=6;
char WRTemp[2];

int CS[8];
char CS1Temp[2];
char CS2Temp[2];
char CS3Temp[2];
char CS4Temp[2];
char CS5Temp[2];
char CS6Temp[2];
char CS7Temp[2];
char CS8Temp[2];

unsigned int ADD;
char ADD1Temp[2];
char ADD2Temp[2];
char ADD3Temp[2];
char ADD4Temp[2];
char ADD5Temp[2];
char ADD6Temp[2];
char ADD7Temp[2];
char ADD8Temp[2];


void setup(){

  Serial.begin(115200);
  //for (int i=1; i <= sizeof(CSpin); i++){pinMode(CSpin[i], OUTPUT);} // initialisation des pins de CS
  //for (int i=0; i <= sizeof(CSpin); i++){digitalWrite(CSpin[i], HIGH);} // monter les CS
  Serial.write('1');
  
  
}

void loop(){


  ///////////// SERIAL RX /////////////


  while(Serial.available()<=0){
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
    delay(50);}

  // Récupération CODE
  CODEint = Serial.parseInt();
  ultoa(CODEint,CODEbin,2);
  
  // WR
  sprintf(WRTemp,"%c",CODEbin[7]);
  WR = atoi(WRTemp);
  
  // CS
  sprintf(CS1Temp,"%c",CODEbin[15]);
  sprintf(CS2Temp,"%c",CODEbin[14]);
  sprintf(CS3Temp,"%c",CODEbin[13]);
  sprintf(CS4Temp,"%c",CODEbin[12]);
  sprintf(CS5Temp,"%c",CODEbin[11]);
  sprintf(CS6Temp,"%c",CODEbin[10]);
  sprintf(CS7Temp,"%c",CODEbin[9]);
  sprintf(CS8Temp,"%c",CODEbin[8]);
  
  CS[0] = atoi(CS1Temp);
  CS[1] = atoi(CS2Temp);
  CS[2] = atoi(CS3Temp);
  CS[3] = atoi(CS4Temp);
  CS[4] = atoi(CS5Temp);
  CS[5] = atoi(CS6Temp);
  CS[6] = atoi(CS7Temp);
  CS[7] = atoi(CS8Temp);
  
  //Serial.print("\n");
  //for(int i=0;i<8;i++){Serial.print(CS[7-i]);}

  // ADD

  
  if (WR==0){
    digitalWrite(13, HIGH);
    while(1>0){}
    }
    
// if ID=CODE, the code stops after lighting up the LED on pin 13.
//If ID!= CODE, the code goes back to the beggining and led on pin 13 is blinking


}
// 2153320780 correspond to WR=0 : CS='01011001' ; ADD=17; DATA='01001100'
