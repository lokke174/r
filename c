int light5=5, light6=6, light7=7, light8=8,light=0,light1=255, dictance = 0;

void setup() {
pinMode(A2,INPUT);
pinMode(light6,OUTPUT);
pinMode(light7,OUTPUT);
pinMode(light5,OUTPUT);
pinMode(light8,OUTPUT);
}

void loop() {
dictance = analogRead(A7);
digitalWrite (light6,dictance);
//analogWrite
//analogWrite(light5, light);
//light=light+25;
//delay(500);
//analogWrite(light6, light);
//light=light+25;
//delay(500);
//analogWrite(light5, light1);
//light1=light1-25;
//delay(500);
//analogWrite(light6, light1);
//light1=light1-25;
//delay(500);
