//
// Created by 吴凯 on 2018/12/14.
//

#include <stdio.h>
#include <ctype.h>

int t_atoi(char s[]);

int main(){
    char s[]="-324";
    int d = t_atoi(s);
    printf("%d \n", d);
}
int t_atoi(char s[]){
    int i,n,sign;
    /*skip white space跳过空白字符*/
    for (i = 0; isspace(s[i]); i++) {
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-'){
        i++;    //跳过正负号字符
    }
    for (n = 0; isdigit(s[i]); i++) {
        n = 10 * n + (s[i] - '0');
    }
    return sign * n;
}