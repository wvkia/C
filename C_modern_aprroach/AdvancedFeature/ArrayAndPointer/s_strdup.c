//
// Created by 吴凯 on 2019/2/23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 导入stdlib库

char *s_strdup(char *); //声明方法

int main(){
    char * str1="1234";

    char *s2 = s_strdup(str1);

    printf("%s\n", s2);
    s2=strcat(s2,"5");

    printf("%s\n", s2);
    printf("%s\n", str1);

    //结束后释放指针
    free(s2);
}
/**
 * 复制一份字符串s，并返回新的指针
 * 由malloc动态分配内存，注意使用后释放指针
 * @param s
 * @return
 */
char *s_strdup(char *s){
    if (NULL == s) {
        return NULL;
    }
    char *str = malloc(strlen(s) + 1);
    strcpy(str,s);
    return str;

}

