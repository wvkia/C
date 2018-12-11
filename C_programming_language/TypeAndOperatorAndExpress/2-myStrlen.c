#include <stdio.h>

int myStrlen(char s[]);

int main(){
    int i=100;
    char s[i];

    for(i =0; i < 20;i++){
        s[i]=i+'0';
    }
    s[i] = '\0';
    printf("%s , %d \n", s, myStrlen(s));
    return 0;
}

int myStrlen(char s[]){
    int i;

    while ( s[i] != '\0'){
        ++i;
    }
    return i;
}