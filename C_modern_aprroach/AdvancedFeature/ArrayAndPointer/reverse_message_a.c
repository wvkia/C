//
// Created by 吴凯 on 2019/2/20.
//

#include <stdio.h>
#define N 10

int main(){
    char msg[N];
    int i;

    printf("Enter the message:");
    for (i = 0; i < N; i++) {
        msg[i] = getchar();
        if (msg[i] == '\n') {
            break;
        }
    }

    printf("Reversal :");
    for (i--; i >= 0; i--) {
        putchar(msg[i]);
    }
    putchar('\n');
    return 0;

}