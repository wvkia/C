#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
float fahr_func(int );

int main(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr+STEP){
        printf("%3d %6.1f \n",fahr,fahr_func(fahr));
    }
}

float fahr_func(int fahr){
    float d = 5.0 / 9.0;
    
    d = d * (fahr - 32);
    return d;
}
