#define c 261
#define d 294
#define e 329
#define f 349
#define g 392
#define a 440
#define b 493
#define c1 523
#define d1 554
#define e1 659
#define f1 698
#define g1 784
#define a1 880
#define b1 988
#define WHOLE 0.25 
#define HALF 0.25 
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
int tune[] ={e,f,g,e1,c1,d1,c1,c1,b1,b1,d,e,f,d,b,c1,a,a,g,g,e,f,g,c1,d1,e1,d1,c1,a,d1,e1,f1,e1,d1,g,f1,e1,d1,c1,c1};
float duration[] = {WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE,WHOLE};
int length;
void setup() {
pinMode(8, OUTPUT);
    length = sizeof(tune) / sizeof(tune[0]);

}

void loop() {
  for (int x=0; x<length; x++) {
      tone(8, tune[x]);
      delay(2500 *duration[x]); 
      noTone(8);
       }
   delay(5000);


}
