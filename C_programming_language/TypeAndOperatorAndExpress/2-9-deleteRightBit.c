//
// Created by 吴凯 on 2018/12/13.
//

#include <stdio.h>

int main(){
    unsigned x=3;

    /**
     * 可以删除最右边为1的一个二进制位
     * 因为x-1后会将最后一位倒置，再与原来的位取&
     * 如果最后一位是1，倒置为0，取&后将1置为0
     */
    x &= (x-1);

    printf("%u \n", x);
}