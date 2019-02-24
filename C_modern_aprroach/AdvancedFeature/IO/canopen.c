//
// Created by 吴凯 on 2019/2/24.
//

/**
 * checks whether a file can be opened for reading
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[]){
    FILE *fp;

    if (argc != 2) {
        printf("usage:错误命令输入\n");
        return 2;
    }

    if ((fp = fopen(argv[1],"r")) == NULL) {
        printf("%s 文件无法打开\n", argv[1]);
        return 1;

    }

    printf("%s 文件打开\n", argv[1]);
    fclose(fp);
    return 0;
}