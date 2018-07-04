#include <stdio.h>
int main(){
    int N;
    int a[10000] = {0};
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        int tmp;
        scanf("%d", &tmp);
        tmp = (tmp > i) ? tmp-i : i-tmp;
        a[tmp]++;
    }
    for(int i = 9999; i >= 0; i--){
        if(a[i] > 1){
            printf("%d %d\n", i, a[i]);
        }
    }
}