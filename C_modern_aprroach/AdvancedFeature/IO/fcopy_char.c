//
// Created by 吴凯 on 2019/2/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fsouce,*fdest;
    int ch;

    if (argc != 3) {
        fprintf(stderr, "参数错误"); //通过fprintf往stderr输出
        exit(EXIT_FAILURE); //通过宏定义退出
    }


    //采用rb和wb可以既复制文本文件也可以二进制文件

    if ((fsouce = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "源文件打不开 %s \n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fdest = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "目标文件打不开 %s \n", argv[1]);

        fclose(fsouce);//关闭上面已经打开的文件流
        exit(EXIT_FAILURE);
    }


    while ((ch = getc(fsouce)) != EOF) {
        putc(ch, fdest);
    }

    //关闭文件流
    fclose(fsouce);
    fclose(fdest);
    return 0;
}