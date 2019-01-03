//
// Created by 吴凯 on 2018/12/28.
//

#include <stdio.h>

#define PI 3.14

int main(){
    float r,s;

    printf("enter ball r: ");
    scanf("%f", &r);
    s = (4.0 / 3.0) * PI * r * r * r;

    printf("the result is %.1f \n", s);
    return 0;
}