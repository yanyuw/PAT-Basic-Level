#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i = 0,j;
    int r[1000];
    scanf("%d%d%d",&a,&b,&d);
    c = a + b;
    if(c == 0)
    {
        printf("0");
        return 0;
    }
    while(c != 0)
    {
        r[i] = c % d;
        c = c / d;
        i++;
    }
    for(j = i-1; j >= 0; j--)
    {
        printf("%d",r[j]);
    }

    return 0;
}