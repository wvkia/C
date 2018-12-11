#include <stdio.h>

#define MAXLINE 1000

int getlineFromCmd(char line[],int maxline);
void copy(char to[], char from[]);

/**
  打印最大长度
  */
int main (){

    int len;    /*当前行长度*/
    int max;    /*最大行长度*/
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0 ;
    while( (len = getlineFromCmd(line,MAXLINE)) > 0){
        if(len > max){
            max= len;
            copy(longest,line);
        }
    }
    if(max > 0){
        printf("%s ",longest);
    }
    return 0;
}

/*getline:读一行到s中并返回长度*/
int getlineFromCmd(char s[],int lim){
    int c,i;

    for(i = 0; i <lim - 1 && (c = getchar()) !=EOF && c != '\n' ;++i){
        s[i] = c;
    }
    if( c == '\n'){
        s[i]=c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy函数，从from复制到to，假定to数组足够大*/
void copy(char to[],char from[]){
    int i;

    i=0;
    while( (to[i] = from[i]) != '\0'){
        ++i;
    }
}
