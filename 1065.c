// 测试点3
#include<stdio.h>
int main()
{
    int n,m,i,j,k = 0,x,y;
    int couple[100000],a[100000],b[100000];

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d%d",&x,&y);
        couple[x] = y;
        couple[y] = x;
    }
    scanf("%d",&m);
    for(i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < m; i++)
    {
        int flag = 1;
        for(j = 0; j < m; j++)
        {
            if(j != i)
            {
                if(couple[a[i]] == a[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
        {
           b[k] = a[i];
           k++;
       }
    }
    for(i = 0; i < k-1; i++)
    {
        for(j = 0; j < k-1-i; j++)
        {
            if(b[j] > b[j+1])
            {
                int tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
            }
        }
    }
    printf("%d\n",k);
    for(i = 0; i < k; i++)
    {
        if(i != k-1)
            printf("%d ",b[i]);
        else
            printf("%d",b[i]);
    }

    return 0;
}