#include <stdio.h>
#include <stdlib.h>

void delay(unsigned int value){
    unsigned int count1 = 0;
    unsigned int count2 = 0;

    for(count1 = 0; count1 < value; count1++){
        for(count2 = 0; count2 < count1; count2++){

        }
    }
}

const char anim[] = 
  "        0\n\
       000\n\
        0\n\
        0\n\
        0\n\
";

int main(){
    int jumpControlAtBottom = 0;
    const int someDelay = 16000;
    int shiftControl = 0;

    for(jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom){
        printf("\n");
    }

    fputs(anim, stdout);

    for (shiftControl = 0; shiftControl < 20; ++shiftControl){
        delay(someDelay);
        printf("\n");
    }
    
    return 0;
}
