#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int max,min;
    int id1,id2;
    for(int i = 0; i < N; i++){
        int id,x,y;
        scanf("%d %d %d", &id, &x, &y);
        int d = x*x + y*y;
        if(i == 0){
            max = d;
            min = d;
            id1 = id;
            id2 = id;
            continue;
        }
        if(d > max){
            max = d;
            id2 = id;
        }
        if(d < min){
            min = d;
            id1 = id;
        }
    }

    printf("%04d %04d",id1,id2);


    return 0;
}