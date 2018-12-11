//
// Created by 吴凯 on 2018/12/11.
//

#include <stdio.h>

void t_squeeze(char s[],int c);

/**
 * 将字符串t strcat到s后面
 * @param s
 * @param t
 */
void my_strcat(char s[], char t[]);

int main(){
    char s[6];
    s[0] = 'a', s[1] = 'b', s[2] = 'b', s[3] = '\0';
    printf("%s  \n", s);

    t_squeeze(s, 'b');
    printf("%s  \n", s);


    //拼接字符串
    printf("拼接字符串==== \n");

    char t[2];
    t[0] = 'a', t[1] = '\0';
    my_strcat(s, t);
    printf("%s  \n", s);
}
/**
 * 删除字符串s中所有的c
 * @param s
 * @param c
 */
void t_squeeze(char s[],int c){
    int i,j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

/**
 * 将字符串t strcat到s后面
 * @param s
 * @param t
 */
void my_strcat(char s[], char t[]){
    int i,j;

    i = j = 0;

    /*找到s到结束位置*/
    while ( s[i] != '\0'){
        i++;
    }
    while ((s[i++] =t[j++]) !='\0'){
        ;
    }

}
