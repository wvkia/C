//
// Created by 吴凯 on 2018/12/11.
//


#include <ctype.h>
#include <stdio.h>

int my_htoi(char s[]);

int my_ctoi(char c);

/*答案解决办法*/
int htoi(char s[]);

int main(){
    char s[5];
    s[0]='0',s[1]='x',s[2]='2',s[3]='F',s[4]='\0';
    int n = my_htoi(s);
    printf("%s , %d \n", s, n);

    n = htoi(s);
    printf("%s , %d \n", s, n);
}
int my_htoi(char s[]){
    int i = 0,n=0;

    if (s[0] =='0' && (s[1] =='x' || s[1] =='X')){
        i=2;
    }
    for (; s[i] != '\0'; i++) {
        if(isdigit(s[i])){
            int ci = my_ctoi(s[i]);
            n = ci + n*16;
        } else{
            int fi=0;
            if( s[i] >='a' && s[i] <= 'z'){
                fi=s[i] - 'a' + 10;
            }
            if (s[i] >='A' && s[i]<='Z'){
                fi=s[i] - 'A' + 10;
            }
            n = fi + n * 16;
        }
    }
    return n;
}

int my_ctoi(char c){
    if(c >= '0' && c <='9'){
        return c - '0';
    } else{
        return c;
    }
}

/*答案解决办法*/
int htoi(char s[]){
    int hexdigit,i,inhex,n;
    int YES =1;
    int NO=0;

    i=0;
    if(s[i] == '0'){    /*跳过0X or 0x*/
        ++i;
        if (s[i] == 'x' || s[i] == 'X') {
            ++i;
        }
    }

    n=0;
    inhex=YES;  /*确保数据有效*/

    for (; inhex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            hexdigit = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            hexdigit = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            hexdigit = s[i] - 'A' + 10;
        } else{
            inhex = NO; /*不是有效字符*/
        }

        if (inhex == YES) {
            n = 16 * n + hexdigit;
        }
    }
    return n;
}
