#include<stdio.h>
int main()
{
    int n,i,k,score,search;
    int count[110] = {0};

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&score);
        count[score]++;
    }
    scanf("%d",&k);
    for(i = 0; i < k; i++)
    {
        scanf("%d",&search);
        if(i != k-1)
        {
            printf("%d ",count[search]);
        }
        else
        {
            printf("%d",count[search]);
        }
    }

    return 0;
}