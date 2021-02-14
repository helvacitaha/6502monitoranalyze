const int adr[]={22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52};
const int bus[]={31,33,35,37,39,41,43,45};
const int clk=8;
const int rw=9;

void setup() {
  for(int i=0;i<16;i++){
    pinMode(adr[i],INPUT);
  }
  for(int i=0;i<8;i++){
    pinMode(bus[i],INPUT);
  }
  pinMode(clk,INPUT);
  pinMode(rw,INPUT);
  attachInterrupt(digitalPinToInterrupt(clk),readd,RISING);
  Serial.begin(57600);
}

void readd(){
  char output[15];
  unsigned int address=0;
    for(int i=0;i<16;i++){
    int bit = digitalRead(adr[i])?1:0;
    address=(address<<1)+1;
    Serial.print(bit);
  }
  Serial.print("   ");
  unsigned int databus=0;
  for(int i=0;i<8;i++){
    int bit = digitalRead(bus[i])?1:0;
    databus = (databus<<1)+bit;
    Serial.print(bit);
  }
  sprintf(output,"   %04x  %c  %02x",address,digitalRead(rw)?'R':'W',databus);
  Serial.println(output);
}

void loop() {
}
