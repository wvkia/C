//
// Created by 吴凯 on 2019/2/19.
// Test whether a number is prime
//

#include <stdio.h>

#define TRUE 1
#define FALSE 0 //宏定义

typedef int Bool; //类型定义，将int重新定义成Bool类型

Bool is_prime(int n){
    int divisor;

    if (n <=1) {
        return FALSE;
    }

    for (divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return FALSE;
        }

    }
    return TRUE;
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("Prime\n");
    } else{
        printf("Not\n");
    }
}

