//
// Created by 吴凯 on 2019/2/20.
//

#include <stdio.h>
#define N 10

int main(void){
    char msg[N],*p;

    printf("Enter message : ");
    for (p = &msg[0]; p < &msg[N]; p++) {
        *p = getchar();
        if (*p == '\n') {
            break;
        }
    }

    printf("reversal :");
    for (p--; p >= &msg[0]; p--) {
        putchar(*p);
    }
    putchar('\n');
    return 0;
}