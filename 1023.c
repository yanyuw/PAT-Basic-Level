#include<stdio.h>
int main()
{
    int i,flag = 9;
    int a[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if(i != 0)
        {
            if(a[i] != 0 && i <= flag)
            {
                flag = i;
                // printf("flag=%d ",flag);
            }
        }
    }
    printf("%d",flag);
    a[flag]--;
    for(i = 0; i < 10; i++)
    {
        while(a[i] != 0)
        {
            printf("%d",i);
            a[i]--;
        }
    }
    
    
    return 0;
}