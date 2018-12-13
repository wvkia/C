//
// Created by 吴凯 on 2018/12/12.
//

#include <stdio.h>
int my_any(char s[], char t[]);


int main(){
    char s[3];
    char t[2];

    s[0] = 'b', s[1] = 'a', s[2] = '\0';
    t[0] = 'a', t[1] = '\0';

    int n = my_any(s, t);
    printf("%s in %s firstplace is %d \n", t, s, n);
}

int my_any(char s[], char t[]){
    int i,j;
    for (i=0; s[i] != '\0'; i++) {
        for(j=0; t[j] != '\0' ; j++){
            if(s[i] == t[j]) {
                return i;
            }
        }
    }
    return -1;
}