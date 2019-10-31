//----------------pino das luzes-------------
#define banheiro 3
#define cozinha 5
#define quartoCasal 9
#define quartoFilho 7
#define sala 11

int leituraSensor;
//---------------sensor Chuva----------------
#define sensorChuva 12
int leituraChuva;

void setup(){
  for(int i = 3; i <= 11; i = i + 2){
    pinMode(i, OUTPUT); 
   }
  pinMode(sensorChuva, INPUT);

  Serial.begin(9600);
}
 
void loop(){
  leituraSensor = Serial.read();
  leituraChuva = digitalRead(sensorChuva);  

  switch(leituraSensor){
    case 'b':
      digitalWrite(banheiro, !digitalRead(banheiro));
      break;
    case 'k':
      digitalWrite(cozinha, !digitalRead(cozinha));
      break;
    case 'm':
      digitalWrite(quartoCasal, !digitalRead(quartoCasal));
      break;
    case 'c':
      digitalWrite(quartoFilho,!digitalRead(quartoFilho));
      break;
    case 'd':
      digitalWrite(sala, !digitalRead(sala));
      break;
    }
    if(leituraChuva == 0){
    Serial.println("10000");
    delay(10000);
    }
}
