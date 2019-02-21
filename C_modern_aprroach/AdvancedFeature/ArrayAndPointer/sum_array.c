//
// Created by 吴凯 on 2019/2/20.
//

#include <stdio.h>
int sum_array(int a[],int n){
    int *p ,sum;
    sum=0;

    for (p = a; p < a + n; p++) {
        sum += *p;
    }
    return sum;
}
int main(){
    int a[]={1,2,4};
    printf("%d\n",sum_array(a,3));
}