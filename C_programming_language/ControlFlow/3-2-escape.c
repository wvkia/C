//
// Created by 吴凯 on 2018/12/13.
//

#include <stdio.h>

void escape(char s[], char t[]);

int main(){
    char t[] = "123\t456\n7";
    char s[9];

    escape(s, t);
    printf("t = %s , s  = %s \n", t, s);
}

void escape(char s[], char t[]){
    int i,j;

    i = j = 0;

    while (t[i] != '\0'){
        switch (t[i]){
            case '\n':
                s[j++]='\\';
                s[j++]='n';
                break;
            case '\t':
                s[j++]='\\';
                s[j++]='t';
                break;
            default:
                s[j++] = t[i];
                break;
        }
        i++;
    }
}