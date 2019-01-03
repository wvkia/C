//
// Created by 吴凯 on 2018/12/28.
//

#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main(){
    float fahrenheit,celsius;
    printf("ENTER Fahrenheit temperatur : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("celsius is %.1f \n", celsius);
    return 0;
}