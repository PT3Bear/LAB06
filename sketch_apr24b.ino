#include<Keypad.h>
#define c 261
#define d 294
#define e 329
#define f 349
#define g 392
#define a 440
#define b 493
#define C 523
#define D 554
#define E 659
#define F 698
#define G 784
#define A 880
#define B 988
const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={{'7','8','9','C'},{'4','5','6','D'},{'1','2','3','E'},{'0','A','B','F'}};
byte rowPins[ROWS]={11,10,9,8};
byte colPins[COLS]={15,14,13,12};
int tune[] ={c,d,e,f,g,a,b,C,D,E,F,G,A,B,c,d};
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);


void setup() {
 pinMode(5, OUTPUT);
Serial.begin(9600);
}

void loop() {
int cc;
char key =keypad.getKey();
  if(key!=NO_KEY){
      if(key>='0'&&key<='9')
        cc=key-'0';
       else
        cc=key-'A'+10;
     tone(5,tune[cc]);
     delay(500);
     Serial.println(cc);
  }
   noTone(5);
}
