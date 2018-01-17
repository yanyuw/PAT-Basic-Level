#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long gcd(long a,long b)
{
    if (b == 0) 
        return a;
    else 
        return gcd(b,a%b);
}
int printfnum(long a, long b)
{
    long x = a / b; //整数部分
    long y = a % b; 
    long m;
    if(x == 0){
        if(y == 0){
            printf("0");
        }
        else{
            m = gcd(y,b); //化简用
            if(a * b >= 0){ 
                printf("%d/%d",abs(y / m),abs(b / m));
            }
            else{
                printf("(-%d/%d)",abs(y / m),abs(b / m));
            }
        }
    }
    else{
        if(x < 0){
            printf("(");
        }
        printf("%ld",x);
        if(y != 0){
            m = gcd(y,b);
            printf(" %d/%d",abs(y / m),abs(b / m));
        }
        if(x < 0){
            printf(")");
        }
    }
    return 0;
}

int main()
{
    long a1,b1,a2,b2;
    int i;
    char sign[4]={'+','-','*','/'};
    scanf("%ld/%ld%ld/%ld",&a1,&b1,&a2,&b2);
    for(i = 0; i < 4; i++){
        printfnum(a1,b1);
        printf(" %c ",sign[i]);
        printfnum(a2,b2);
        printf(" = ");
        if(i == 0){
            printfnum(a1 * b2 + a2 * b1, b1 * b2);
            printf("\n");
        }
        else if(i == 1){
            printfnum(a1 * b2 - a2 * b1, b1 * b2);
            printf("\n");
        }
        else if(i == 2){
            printfnum(a1 * a2, b1 * b2);
            printf("\n");
        }
        else{
            if(b1 * a2 == 0){ // 除法分母等于0时
                printf("Inf");
                printf("\n");
            }
            else{
                printfnum(a1*b2, a2*b1);
                printf("\n");
            }
        }
    }

    return 0;
}