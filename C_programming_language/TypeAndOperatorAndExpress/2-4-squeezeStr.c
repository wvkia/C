//
// Created by 吴凯 on 2018/12/12.
//

#include <stdio.h>


/**
 * 删除s中任何与t字符匹配到字符
 * @param s
 * @param t
 */
void squeeze_str(char s[], char t[]);

int main(){
    char s[4];
    char t[3];

    s[0] = 'a', s[1] = 'b', s[2] = 'c', s[3] = '\0';
    t[0] = 'b', t[1] = 'a',t[2]='\0';

    printf("之前 %s \n", s);
    squeeze_str(s, t);

    printf("去除：%s 之后 %s \n",t, s);
}
/**
 * 删除s中任何与t字符匹配到字符
 * @param s
 * @param t
 */
void squeeze_str(char s[], char t[]){
    int i = 0,j=0;

    for (; s[i] != '\0'; i++) {
        int contain=0;

        int k=0;
        for (; t[k] != '\0'; k++) {
            if(s[i] == t[k]){
                contain=1;
                break;
            }
        }

        if(!contain){
            s[j++]=s[i];
        }
    }
    s[j] = '\0';
}


/**
 * 答案
 * @param s
 * @param t
 */
void t_squeeze_str(char s[], char t[]){
    int i,j,k;
    for(i=k=0;s[i] != '\0';i++){
        for(j=0; t[j] != '\0' && t[j] != t[i];j++){
            ;
        }
        if(s[j] == '\0'){
            s[k++] = s[i];
        }
    }
    s[k] = '\0';
}