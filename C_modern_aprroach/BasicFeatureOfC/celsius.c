//
// Created by 吴凯 on 2019/2/18.
//

#define FREEZING 32.0  //预定义指令
#define SCALE (5.0/9.0) //宏定义，替换

#include <stdio.h> //预定义指令 包括导入库函数


int main(){

    float fah,cel; //声明变量
    printf("Enter fahrenheit : "); //格式化打印
    scanf("%f", &fah); //赋值

    cel = (fah - FREEZING) * SCALE; //运算赋值

    printf("cels : %.1f \n", cel);
    return 0;   //向操作系统返回值
}
