#include <stdio.h>
#include <stdlib.h>

int main(){

    char numbers[] = {'0','1','2','3','4','5','6','7','8','9'};
    char letters[] = {'a','b','c','d','e','f','g','h','i','j',
                     'k','l','m','n','o','p','q','r','s','t',
                     'u','v','w','x','y','z'};

    size_t elements = sizeof(letters)/sizeof(letters[0]);

    int nb = 6;
    char password[6];
   
    printf("%i", elements);
    return 0;
}
