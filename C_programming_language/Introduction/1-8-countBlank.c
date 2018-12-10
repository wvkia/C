#include <stdio.h>

int main(){
    int c,spaceNumber,enterNumber,tabNumber;

    spaceNumber = 0,enterNumber=0,tabNumber=0;

    while((c = getchar()) != EOF){
        if( c == '\n'){
            ++enterNumber;
        }
        if( c == '\t'){
            ++tabNumber;
        }
        if( c == ' '){
            ++spaceNumber;
        }
    }
    printf("spaceNumber %d, enterNumber %d, tabNumber %d \n",spaceNumber,enterNumber,tabNumber);
}
