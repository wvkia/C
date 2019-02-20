//
// Created by 吴凯 on 2019/2/19.
//

#include <stdio.h>

#define N 10

void max_min(int b[],int n,int *big,int *small);


int main(){
    int b[N],i,big,small;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }
    max_min(b, N, &big, &small);
    printf("Largest : %d \n", big);
    printf("Smallest: %d \n", small);
}

void max_min(int b[],int n,int *big,int *small){
    int i;
    *big = *small = b[0];
    for (i = 1; i < n; i++) {
        if (b[i] > *big) {
            *big = b[i];
        } else{
            *small = b[i];
        }
    }
}