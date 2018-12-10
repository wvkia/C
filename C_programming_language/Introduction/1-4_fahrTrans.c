#include <stdio.h>

/*
 *define 指令进行替换
 */
#define LOWER 0 /*下限*/
#define UPPER 300 /*上限*/
#define STEP 20 /*步长*/

int main(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d %6.1f \n",fahr,(5.0 / 9.0) * (fahr - 32) );
    }
}

