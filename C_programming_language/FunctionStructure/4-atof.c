//
// Created by 吴凯 on 2018/12/16.
//

#include <ctype.h>

/*字符串转double*/
double t_atof(char s[]){
    double  val,power;
    int i,sign;


    /*跳过空白符*/
    for (i = 0; isspace(s[i]); i++) {
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] =='+' || s[i] =='-'){
        i++;
    }

    //求整数部分
    for (val = 0.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
    }
    if(s[i] =='.'){
        i++;
    }

    //求小数点后面
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    return sign * val / power;
}