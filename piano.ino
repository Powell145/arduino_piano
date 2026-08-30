int buzzer = 11; // Пин 11 подключен к пьезоизлучателю
int DO = 2;
int RE = 3;
int MI = 4;
int FA = 7;
int SO = 8;

void setup() {
pinMode(buzzer, OUTPUT); // Инициализация цифрового вывода как выход
pinMode(DO,INPUT);
pinMode(RE,INPUT);
pinMode(MI,INPUT);
pinMode(FA,INPUT);
pinMode(SO,INPUT);
}

void loop() {
int notaDO = digitalRead(DO);
int notaRE = digitalRead(RE);
int notaMI = digitalRead(MI);
int notaFA = digitalRead(FA);
int notaSO = digitalRead(SO);

if(notaDO){
tone(buzzer, 131);
}
else if(notaRE){
tone(buzzer, 147);
}
else if(notaMI){
tone(buzzer, 165);
}
else if(notaFA){
tone(buzzer, 175);
}
else if(notaSO){
tone(buzzer, 196);
}
else{
noTone(buzzer);
}
}
