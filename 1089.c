#include <stdio.h>
#include <math.h>

int main(){
    int N, a[110];
    scanf("%d", &N);
    //注意从1开始
    for(int i = 1; i <= N; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= N; i++){
        for(int j = i + 1; j <= N; j++){
            //假设i和j两个人是狼人
            int wolf[110];
            //liar数组要开大一点 测试点3
            int liar[10];
            int liarcnt = 0;
            for(int t = 1; t <= N; t++){
                wolf[t] = 1; //初始化wolf数组为1 即所有人都是好人
            }
            wolf[i] = wolf[j] = -1; // 假设i和j是狼人
            for(int k = 1; k <= N; k++){ // 遍历检查谁说了假话
                if(a[k] * wolf[abs(a[k])] < 0){ //即符号不同
                    liar[liarcnt] = k;
                    liarcnt++;
                }
            }
            if(liarcnt == 2 && wolf[liar[0]] + wolf[liar[1]] == 0){// 2人说假话且其中一人为狼人
                printf("%d %d", i, j);
                return 0;
            } 

        }
    }
    printf("No Solution");
    return 0;
}