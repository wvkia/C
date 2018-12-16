//
// Created by 吴凯 on 2018/12/16.
//

#include <string.h>

void reverse(char s[]){
    int c,i,j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c= s[i];
        s[i]=s[j];
        s[j]=c;
    }
}