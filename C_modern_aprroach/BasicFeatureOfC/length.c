
//
// Created by 吴凯 on 2019/2/19.
//

#include <stdio.h>

int main(){
    int length = 0;

    printf("please enter the line \n");
    while (getchar() != '\n') {
        length++;
    }
    printf("Message was %d characters \n", length);
    return 0;
}