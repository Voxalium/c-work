#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randCharacter;
    char characters[] = {
                            'a','b','c','d','e','f','g','h','i','j',
                            'k','l','m','n','o','p','q','r','s','t',
                            'u','v','w','x','y','z','0','1','2','3',
                            '4','5','6','7','8','9'
                        };

    int nbChar = 18;
    for(int i = 0; i < nbChar; i++){
        //randNumber = rand()%11;
        int randCharacter = rand()%37;
        printf("%c", characters[randCharacter]);
    }
    return 0;
}
