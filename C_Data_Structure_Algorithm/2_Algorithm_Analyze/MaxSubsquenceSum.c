//
// Created by 吴凯 on 2019/1/3.
//
#include <stdio.h>
/**
 * 循环遍历，算法复杂度O3
 *
 * 整个的思路是把所有的数据都加一遍，计算出最大的
 *
 * 使用i，j固定子串的最开始和最结束位置，然后由k以此从i加到j，每次记录thisSum，和max进行比较，获取最大值
 *
 * 这样做的坏处是很多数据重复计算，比如从第1位到第5位，每个数据加了一遍，统计出max；然后从第2位到第5位，实际上数据已经在前面加过了
 * @param A
 * @param n
 * @return
 */
 int maxSubsequenceSum_1(const int A[] ,int n){
     int thisSum, maxSum, i, j, k;
     maxSum = 0;

     for (i = 0; i < n; i++) {
         for (j = i; j < n; j++) {
             thisSum=0;

             for (k = i; k < j; k++) {
                 thisSum += A[k];
             }
             if (thisSum > maxSum) {
                 maxSum = thisSum;
             }
         }
     }
     return maxSum;
}

/**
 * 可以通过去除上面的k，来简化计算
 *
 * 具体是
 * | 1 2 3 4 5 6 |
 * 先固定开始位置，作为字串的开始位置，然后往后加，计算由1开始的字串数据最大值；然后从2开始，计算由2开始的字串最大值
 * 这样同样可以遍历所有的字串，并且不会重复计算
 * @return
 */
int maxSubsequenceSum_2(const int A[], int n) {
    int thisSum, maxSum, i, j, k;
    maxSum = 0;

    for (i = 0; i < n; i++) {
        thisSum = 0;
        for (j = i; j < n; j++) {
            thisSum += A[j];
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

/**
 * 上面的方法已经简化了计算，但还可以简化，
 * 假设这么一串  1,-2,4,-2,5,6,-9，从开头开始加，那么如果发现得到的最大值由负数的话，
 *  那么最大值字串肯定不包括前面的数据，那就thisNum清零，从下一个位置继续加
 * @return
 */
int maxSubsequenceSum_3(const int A[], int n) {
    int thisSum,maxSum,i;
    maxSum = thisSum = 0;

    for (i = 0; i < n; i++) {
        thisSum += A[i];
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0) {
            thisSum=0;
        }
    }
    return maxSum;
}


    int main(){
    int a[] = {1,-2,4,-2,5,6,-9};

    int max_1 = maxSubsequenceSum_1(a, sizeof(a) / sizeof(int));
    int max_2 =maxSubsequenceSum_2(a, sizeof(a) / sizeof(int));
        int max_3 =maxSubsequenceSum_3(a, sizeof(a) / sizeof(int));
    printf("max_1: %d,max_2: %d ,max_3:%d \n", max_1,max_2,max_3);
 }