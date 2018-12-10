#include <stdio.h>
int main(){
    int a, b, flag = 0;
    scanf("%d %d", &a, &b);
    int c = a * b;
    while(c / 10){
        int tmp = c % 10;
        if(tmp){
            printf("%d", tmp);
            flag = 1;
        } else if (flag){
            printf("%d", tmp);
        }
        //注意下乘积结尾0不输出
        c /= 10;
    }
    printf("%d", c);

    return 0;
}