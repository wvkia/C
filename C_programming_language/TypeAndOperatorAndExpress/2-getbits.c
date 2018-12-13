//
// Created by 吴凯 on 2018/12/12.
//

#include <stdio.h>

/**
 * 返回 x 中从右边 数第 p 位开始向右数 n 位的字段
 * @param x
 * @param p
 * @param n
 * @return
 */
unsigned t_getbits(unsigned x,int p,int n);

int main(){
    unsigned n=0;
    n = t_getbits(4,4, 3);
    printf("%u \n", n);
}
/**
 * 返回 x 中从右边 数第 p 位开始向右数 n 位的字段
 * @param x
 * @param p
 * @param n
 * @return
 */
unsigned t_getbits(unsigned x,int p,int n){
    return (x >> (p+1-n)) & (~(~0 <<n));

}
