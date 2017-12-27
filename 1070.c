#include<stdio.h>
int main()
{
    int n,i,j,sum;
    int a[10000];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j+1])
            {
                int tmp;
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    sum = a[0];
    for(i = 1; i < n; i++)
    {
        sum += a[i];
        sum /= 2;
    }
    
    printf("%d",sum);
    return 0;
}