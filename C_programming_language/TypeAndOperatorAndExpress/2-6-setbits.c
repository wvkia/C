//
// Created by 吴凯 on 2018/12/12.
//

#include <stdio.h>

/**
 * 将x中从第p位开始第n个二进制位设置为y中最右边n位第值，并返回x
 * @param x
 * @param p
 * @param n
 * @param y
 * @return
 */
unsigned t_setbites(unsigned x,int p,int n, unsigned y);

int main(){
    unsigned x =5;int p=3;int n=2;unsigned y=6;

    printf("%u \n", t_setbites(x, p, n, y));
}
/**
 * 将x中从第p位开始第n个二进制位设置为y中最右边n位第值，并返回x
 * @param x
 * @param p
 * @param n
 * @param y
 * @return
 */
unsigned t_setbites(unsigned x,int p,int n, unsigned y){

    return (
            ~( ~(~0 <<n) << (p-n))

            & x

            )
            |

            (
                       (y & ~(~0 << n)) <<(p-n)
            );
}