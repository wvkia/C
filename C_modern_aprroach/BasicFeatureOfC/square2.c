//
// Created by 吴凯 on 2019/2/18.
//

#include <stdio.h>

int main(){
    int i,n;

    printf("Enter number of enteries in table :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }
    return 0;
}