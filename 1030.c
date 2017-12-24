// 测试点4段错误

#include<stdio.h>
int main()
{
    int n,i,j;
    double p;
    int a[10000];
    scanf("%d%lf",&n,&p);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    int max = 0;
    for(i = n-1; i >= 0; i--)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] <= a[j] * p)
            {
                if( i - j + 1 > max)
                {
                    max = i - j + 1;
                }
                
            }
        }
    }
    printf("%d",max);
    return 0;
}