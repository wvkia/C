#include <stdio.h>
int main(){
    int c;
    int spaceNumber = 0;

    while( (c = getchar()) != EOF){
        if( c == ' ' ){
            ++spaceNumber;
        }else{
            spaceNumber=0;
        }

        if( spaceNumber <=1){
            putchar(c);
        }
    }
}
