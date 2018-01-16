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
    list ll[100000];
    j = 0;
    for(i = 0; i < n; i++){
        if(l[i].data < 0){
            ll[j] = l[i];
            j++;
            l[i].data = -1;
        }
    }
    for(i = 0; i < n; i++){
        if(l[i].data <= k && l[i].data >= 0){
            ll[j] = l[i];
            j++;
            l[i].data = -1;
        }
    }
    for(i = 0; i < n; i++){
        if(l[i].data != -1){
            ll[j] = l[i];
            j++;
        }
    }
    for(i = 0; i < n-1; i++){
        printf("%05d %d %05d\n", ll[i].address,ll[i].data,ll[i+1].address);
    }
    printf("%05d %d -1\n",ll[n-1].address,ll[n-1].data);
    

    return 0;
}