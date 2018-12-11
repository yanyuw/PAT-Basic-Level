#include <stdio.h>
int main(){
    int n, a[11000] = {0}, count = 0;
    //a[11000]说好的N<=10^4呢……如果只大一点最后一个测试点会错误
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int sum = i / 2 + i / 3 + i / 5;
        if(!a[sum]){
            a[sum] = 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}