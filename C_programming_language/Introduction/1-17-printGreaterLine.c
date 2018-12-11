
//
// Created by 吴凯 on 2018/12/10.
//
#include <stdio.h>
#define MAXLINE 1000
#define GREATE_NUMBER 10

int getLineFromCmd(char line[], int maxline);

int main(){
    int len;
    char line[MAXLINE];

    while ((len = getLineFromCmd(line, MAXLINE)) > 0) {
        if (len > GREATE_NUMBER) {
            printf("%s ", line);
        }
    }
}
int getLineFromCmd(char line[], int maxline){
    int c,i;

    for(i = 0; i < maxline-1 &&(c = getchar()) != EOF && c != '\n';++i){
        line[i]=c;
    }
    if (c == '\n') {
        line[i] =c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

