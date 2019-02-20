//
// Created by 吴凯 on 2019/2/19.
//

#include <stdio.h>

#define N 10 //宏定义数组个数，方便后续处理

int main(){
    int a[N],i;

    printf("Enter %d number :", N); //调用宏
    for (i = 0; i < N; i ++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");

    //倒叙遍历数组，从N-1最后一位开始
    for (i = N - 1; i >= 0; i--) {
        printf(" %d ", a[i]);
    }
    return 0;

}