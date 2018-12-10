#include <stdio.h>

#define IN 1 /*单词内*/
#define OUT 0 /*单词外*/

int main(){
    int c,nLine,nWord,nChar,state;

    state = OUT;
    nLine = nWord = nChar = 0;

    while( (c = getchar()) !=  EOF){
        ++nChar;
        if( c == '\n'){
            ++nLine;
        }
        if( c == ' ' || c == '\t' || c== '\n'){
            state=OUT;
        }else{
            state=IN;
            ++nWord;
        }
    }

    printf("nLine = %d,nWord =  %d,nChar=  %d \n",nLine,nWord,nChar);
}
