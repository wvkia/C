//
// Created by 吴凯 on 2018/12/13.
//
#include <stdio.h>
int t_binsearch(int x,int v[],int n);

int main(){
    int v[] = {1,2,3,4,5,6};
    printf("%d \n", t_binsearch(3, v, 6));
}

/**
 * find x in v[0] <= v[i] <=...<=v[n-1]
 * @param x
 * @param v
 * @param n
 * @return
 */
int t_binsearch(int x,int v[],int n){
    int low,high,mid;
    low=0;
    high=n-1;

    while (low <= high && x !=v[mid]) {
        if (x < v[mid]) {
            high = mid -1;
        } else  {
            low = mid + 1;
        }
        mid = (low + high) /2;

    }
    if (v[mid] == x) {
        return mid;
    } else{
        return -1;
    }

}