//
// Created by 吴凯 on 2018/12/13.
//


#include <stdio.h>
/**
 * 统计整形参数为1的二进制位的个数
*/

int bitcount(unsigned x){
    int b;

    for (b = 0; x != 0; x >>= 1) {
        if(x & 01){
            b++;
        }
    }
    return  b;
}

int bitcount_and(unsigned x){
    int b;

    for (b = 0; x != 0; x &= (x-1)) {
        b++;
    }
    return  b;
}
int main(){
    unsigned  x=3;
    printf("%d \n", bitcount(x));


}