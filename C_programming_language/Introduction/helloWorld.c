//
//  helloWorld.c
//  C_programming_language
//
//  Created by 吴凯 on 2018/12/8.
//  Copyright © 2018年 吴凯. All rights reserved.
//

#include "helloWorld.h"
#include "stdio.h"

int main(){
    printf("hello");
    //如果输入未知字符，会报错-Wunknown-escape-sequence
    printf("hello,worl \c d");
}

