const int pushbutton = 2;
#define portaled 4

void setup() {
Serial.begin(9600); //inizializzazzione porta seriale
pinMode(portaled, OUTPUT);
pinMode(pushbutton, INPUT); //setto la funzione della porta tra input e output

}

void loop() {
int statopulsante = digitalRead(pushbutton);
Serial.println(statopulsante);
delay(1);
if(statopulsante == 1){
  digitalWrite(portaled, HIGH);
  Serial.println("il led e' acceso");
  }
else{
  digitalWrite(portaled,LOW);
  Serial.println("il led e' spento");
}
}
