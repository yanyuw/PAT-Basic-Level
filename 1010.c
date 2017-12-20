#include<stdio.h>
int main()
{
    int i,a,b,flag;
    flag = 1;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if(b == 0)
        {
            continue;
        }
        if(!flag)
            printf(" ");
        else
            flag = 0;
        printf("%d %d",a * b, b - 1);
    }
    if(flag)
        printf("0 0");
    return 0;
}