#include<stdio.h>
struct mooncake{
    double num;
    double sale;
    double price;
}m[1010];

int main()
{
    int n,d,i,j;
    double sum,a = 0;
    scanf("%d%d",&n,&d);
    for(i = 0; i < n; i++)
    {
        scanf("%lf",&m[i].num);
    }
    for(i = 0; i < n; i++)
    {
        scanf("%lf",&m[i].sale);
        m[i].price = m[i].sale / m[i].num;
    }
    
    struct mooncake tmp = {0,0,0};
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(m[j].price < m[j+1].price)
            {
                tmp = m[j];
                m[j] = m[j+1];
                m[j+1] = tmp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        a = m[i].num;
        if(a >= d)
        {
            sum += ((double)d/a) * m[i].sale;
            break;
        }
        else
        {
            sum += m[i].sale;
            d -= m[i].num;
        }
    }
    printf("%.2lf",sum);
    
    return 0;
}