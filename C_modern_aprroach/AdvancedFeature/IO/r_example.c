//
// Created by 吴凯 on 2019/2/24.
//

#include <stdlib.h>
#include <stdio.h>

#define FILENAME "r_example.c"
int main(){
    FILE *file = fopen(FILENAME, "r");//打开文件，只读方式

    if (file == NULL) {
        printf("打开文件失败");
        exit(0);
    }

    fclose(file);//关闭文件
    return 0;
}