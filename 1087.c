#include <stdio.h>
int main(){
    //测试数据似乎超出了10^4……，数组要开大一点
    int n, a[11000] = {0}, count = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        int sum = i / 2 + i / 3 + i / 5;
        if(!a[sum]){
            a[sum] = 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
