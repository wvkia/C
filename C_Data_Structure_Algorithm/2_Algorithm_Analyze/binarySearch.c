//
// Created by 吴凯 on 2019/1/3.
//

#include <stdio.h>

int binarySearch(const int A[], int n,int s) {
    int low, high, middle;
    low=0,high=n-1;

    while (low <= high) {
        middle = (low+high)/2;

        if (A[middle] == s) {
            return middle;
        }
        if (A[middle] < s) {
            low=middle+1;
        } else if (A[middle] > s) {
            high = middle - 1;
        }
    }
    return middle;

}

int main(){
    int a[] = {1,4,5,7,8,9,50};
    int s=7;
    int index = binarySearch(a, sizeof(a) / sizeof(int), s);
    printf(" index = %d\n", index);
}