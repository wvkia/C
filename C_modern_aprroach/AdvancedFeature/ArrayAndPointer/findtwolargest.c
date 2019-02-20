//
// Created by 吴凯 on 2019/2/19.
//

#include <stdio.h>
#define N 10

void find_two_largest(int a[],int n,int *largest,int *second_largest);

int main(){
    int a[N] = {2,4,2,5,2,3,10,5};
    int largest,second_largest;

    find_two_largest(a, N, &largest, &second_largest);

    printf("largest: %d , second : %d \n", largest, second_largest);
}

void find_two_largest(int a[],int n,int *largest,int *second_largest){
    int i = 0;

    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else{
        *largest = a[1];
        *second_largest = a[0];
    }

    for (i = 2; i < N; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}