//
// Created by 吴凯 on 2018/12/11.
//

#include <stdio.h>

int my_atoi(char s[]);

int main(){
    char s[3];
    s[0]='1';
    s[1]='2';
    s[2]='\0';

    int n = my_atoi(s);
    printf("%d \n", n);
}
int my_atoi(char s[]){
    int i,n;

    n=0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] -'0');
    }
    return n;
}