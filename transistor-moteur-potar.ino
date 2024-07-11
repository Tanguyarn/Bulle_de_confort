const int potarID = A1;
const int moteurID1  = 6;

int ETATbouton = 0 ;
int VITESSE = 0;
int ratio = 4;

void setup() {
  Serial.begin(9600);
  pinMode(moteurID1, OUTPUT);
}

void loop() {

  VITESSE = analogRead(potarID)/ratio;
  
  if (millis()%1000) {
    Serial.print(VITESSE);  
    Serial.print("\n");
  }
  digitalWrite(moteurID1,VITESSE);
}
