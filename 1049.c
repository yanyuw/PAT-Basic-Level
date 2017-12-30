#include<stdio.h>
int main()
{
    int i,n;
    double a,sum = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%lf",&a);
        sum += (a * (i + 1) * (n - i));
    }
    printf("%.2f",sum);
    return 0;
}