//
// Created by 吴凯 on 2018/12/10.
//

#include <stdio.h>
#define MAXLINE 1000

/**
 * 从命令行读取
 * @param line
 * @param limit
 * @return
 */
int getLineFromCmd(char line[], int limit);
/**
 * 反转line
 * @param from
 * @param to
 */
void reverseLine(char from[],char to[]);
void reverseSelf(char line[]);

int main(){
    int len;
    char line[MAXLINE];
    char rever[MAXLINE];


    while ((len = getLineFromCmd(line,MAXLINE)) >0){
        reverseLine(line,rever);
        printf("1 = %s \n",rever);
        reverseSelf(line);
        printf("2 = %s \n",line);

    }
}

int getLineFromCmd(char line[],int limit){
    int c,i;

    for(i=0; i <limit-1 && (c=getchar()) != EOF && c != '\n';i++){
        line[i]=c;
    }
    if(c =='\n'){
        line[i]=c;
        ++i;
    }
    line[i]='\0';
    return i;
}
void reverseLine(char from[],char to[]){
    int i,j;
    for(i=0; from[i] != '\0' ;i++){
    }
    for(j = 0,i--; i >=0; i--,j++){

        to[j]=from[i];
    }
    to[j]='\0';
}

void reverseSelf(char line[]){
    int len,i;
    for(len=0; line[len] != '\0' ;len++){
    }

}
