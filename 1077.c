#include<stdio.h>
int main()
{
    int n,m,i,j,g2;
    double g1;
    double a[110] = {0};
    int b[110] = {0},c[110]={0};
    scanf("%d%d",&n,&m);
    for(i = 0; i < n; i++)
    {
        int max,min,sum,count;
        max = 0;
        min = m;
        sum = 0;
        count = 0;
        scanf("%d",&g2);
        for(j = 0; j < n - 1; j++)
        {
            scanf("%d",&b[j]);
            if(b[j] < 0 || b[j] > m )
            {
                count++;
                continue;
            }
            if(b[j] > max)
            {
                max = b[j];
            }
            if(b[j] < min)
            {
                min = b[j];
            }
            sum += b[j];
        // printf("sum = %d\n",sum);

        }
        // printf("max=%d min=%d",max,min);
        sum = sum - max - min;
        // printf("sum=%d",sum);
        g1 = (double)sum / (n - 3 - count);
        // printf("g1=%lf",g1);
        a[i] = (g1 + g2) / 2;
        c[i] = (int)(a[i] + 0.5);
        // printf("a[%d]=%lf",i,a[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}