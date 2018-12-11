//
// Created by 吴凯 on 2018/12/11.
//

#include <stdio.h>
#include <limits.h>
/**
 * 计算类型值范围
 * @return
 */
int main(){
    /*signed types*/
    printf("signed char min = %d, max= %d \n", SCHAR_MIN, SCHAR_MAX);
    printf("signed short min = %d, max= %d \n", SHRT_MIN, SHRT_MAX);
    printf("signed int min = %d, max= %d \n", INT_MAX, INT_MIN);
    printf("signed long min = %ld, max= %ld \n", LONG_MIN, LONG_MAX);

    /*unsigned tyeps*/
    printf("unsigned char max= %u \n", UCHAR_MAX);
    printf("unsigned short max= %u \n", USHRT_MAX);
    printf("unsigned int max= %u \n", UINT_MAX);
    printf("unsigned long max= %lu \n", ULONG_MAX);
}