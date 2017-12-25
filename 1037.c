#include<stdio.h>
int main()
{
    int g1,s1,k1,g2,s2,k2,g,s,k,flag = 0;
    scanf("%d.%d.%d%d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
    if(g2 * 29 * 17 + s2 * 29 + k2 > g1 * 29 * 17 + s1 * 29 + k1)
    {
        flag = 1;
        int tmp = g1;
        g1 = g2;
        g2 = tmp;

        tmp = s1;
        s1 = s2;
        s2 = tmp;

        tmp = k1;
        k1 = k2;
        k2 = tmp;
    }
    if(k2 - k1 < 0)
    {
        s2--;
        k2 += 29;
        k = k2 - k1;
    }
    else
    {
        k = k2 - k1;
    }
    if(s2 - s1 < 0)
    {
        g2--;
        s2 += 17;
        s = s2 - s1;
    }
    else
    {
        s = s2 - s1;
    }
    g = g2 - g1;
    if(flag)
    {
        printf("-%d.%d.%d",g,s,k);
    }
    else
        printf("%d.%d.%d",g,s,k);

}