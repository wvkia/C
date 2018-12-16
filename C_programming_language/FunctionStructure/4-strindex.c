//
// Created by 吴凯 on 2018/12/16.
//

#include <stdio.h>
#define MAXLINE 1000 /*最大输入行数*/

int t_getline(char line[],int max);

int t_strindex(char source[], char searchfor[]);

char pattern[] = "ould";    /*匹配模式*/

int main(){
    char line[MAXLINE];
    int  found=0;

    while (t_getline(line, MAXLINE) > 0) {
        if (t_strindex(line,pattern) >0){
            printf("%s ", line);
            found++;

        }
    }
    return found;
}

int t_getline(char line[] ,int limit) {
    int c,i;
    i=0;

    while (--limit >0 && (c=getchar()) != EOF && c != '\n'){
        line[i++]=c;
    }
    if(c == '\n'){
        line[i++]=c;
    }
    line[i] = '\0';
    return i;
}
int t_strindex(char s[], char t[]){
    int i,j,k;

    for(i=0;s[i] != '\0';i++){
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
            ;
        }
        if(k >0 && t[k] =='\0'){
            return i;
        }
    }
    return -1;
}