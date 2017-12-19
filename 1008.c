#include<stdio.h>
int main()
{
    int n,m,i;
    int a[110];
    scanf("%d%d",&n,&m);
    m %= n;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = n - m; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
    for(i = 0; i < n-m; i++)
    {
        if(i == n-m-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }   
    return 0;
}