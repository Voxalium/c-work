#include <stdio.h>
#include <string.h>

int main(){

    int note = 0;
    int mode = 0;
    int check;
    char key[3];
    char* scale[12]={"C","Db","D","Eb",
                     "E","F","Gb", "G",
                     "Ab","A","Bb","B"};
    
    printf("Please enter the key, eg. Eb : ");
    scanf("%s", key);

    printf("Mode : ");
    scanf("%i", &mode);
   
    if(mode < 1 || mode > 7){
        printf("%i: invalid mode", mode);
        return 1;
    }
    
    if(mode ==  1){

        for(int i=0; i<12; i++){

            if(strcmp(scale[i], key) == 0){
                note = i;
                printf("== %s major scale ==\n", key);
                break;
            }else note = -1;
        }

        if(note >= 0){
            for (int i=0; i<7 ; i++){
                printf("%s ", scale[note%12]);
                if(i !=2) note +=2;
                else note++;
            }
            printf("\n");
            return 0;        
            }
        
        else{
            printf("%s: invalid key\n", key);
            return 1;
        }

    }

    if(mode == 2){
        for(int i=0; i<12; i++){

            if(strcmp(scale[i], key) == 0){
                note = i;
                printf("== %s minor scale ==\n", key);
                break;
            }else note = -1;
        }

    if(note >= 0){
        for (int i=0; i<7 ; i++){
            printf("%s ", scale[note%12]);
            if(i !=1 && i !=4) note +=2;
            else note++;
        }
        printf("\n");
        return 0;        
        }    
    else{
        printf("%s: invalid key\n", key);
        return 1;
    }
        
    }

}
