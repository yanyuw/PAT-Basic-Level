#include <stdio.h>
#include <math.h>
void printres(double num, int me){
    if(num > me){
        printf(" Cong");
    } else if (num == me){
        printf(" Ping");
    } else {
        printf(" Gai");
    }

}

int main(){
    int me, x, y, a, b;
    double c; //要注意丙不一定是整数，要用浮点数存
    int breakflag = 0;
    scanf("%d %d %d", &me, &x, &y);
    for(int i = 9; i >= 0; i--){
        for(int j = 9; j >= 0; j--){
            if(i == j){
                continue;
            }
            a = 10 * i + j;
            b = 10 * j + i;
            int sub = abs(a - b);
            if(sub*1.0 / x == b*1.0 / y){
                c = sub*1.0 / x;
                breakflag = 1;
                break;
            }
        }
        if(breakflag){
            break;
        }
    }
    if(!breakflag){
        printf("No Solution");
    } else {
        printf("%d", a);
        printres(a, me);
        printres(b, me);
        printres(c, me);
    }

    return 0;
}