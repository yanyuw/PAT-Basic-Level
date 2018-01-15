// 测试点5运行超时
#include<stdio.h>
struct list
{
    int address;
    int data;
    int next;
}l[100000];
typedef struct list list;

int main()
{
    int a,n,k,i,j;
    scanf("%d%d%d",&a,&n,&k);
    for(i = 0; i < n; i++){
        scanf("%d%d%d",&l[i].address,&l[i].data,&l[i].next);
    }
    for(i = 0; i < n; i++){
        for(j = i ; j < n; j++){
            if(l[j].address == (i ? l[i-1].next : a)){
                list tmp = l[i];
                l[i] = l[j];
                l[j] = tmp;
            }
        }
        if(l[i].next == -1){
            n = i + 1;
        }
    }
    for(i = 0; i < n / k; i++){
        int b = i * k;
        for(j = 0; j < k / 2; j++){
            list tmp = l[b+j];
            l[b+j] = l[b+k-j-1];
            l[b+k-j-1] = tmp;
        }
    }
    for(i = 0; i < n-1; i++){
        printf("%05d %d %05d\n", l[i].address,l[i].data,l[i+1].address);
    }
    printf("%05d %d -1\n",l[n-1].address,l[n-1].data);
    

    return 0;
}