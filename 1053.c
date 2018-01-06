#include<stdio.h>
int main()
{
    int n,i,j,d,k,empty1 = 0,empty2 = 0;
    double e;
    
    scanf("%d%lf%d",&n,&e,&d);
    for(i = 0; i < n; i++)
    {
        int count = 0;
        double tmp;
        scanf("%d",&k);
        for(j = 0; j < k; j++)
        {
            scanf("%lf",&tmp);
            if(tmp < e)
            {
                count++;
            }
        }
        if(count > k / 2)
        {
            if(k > d)
            {
                empty2++;
            }
            else
            {
                empty1++;
            }
        }
    }
    printf("%.1lf%% %.1lf%%",(double)empty1 / n * 100,(double)empty2 / n *100);

    return 0;
}