#include<stdio.h>
#include<math.h>

int isprime(int a)
{
    for (int j = 2; j <= (int)sqrt(a); j++)
    {
        if (a % j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,count = 0;
    i = 2;
    scanf("%d",&n);
    while(i+2 <= n)
    {
        // printf("i=%d",i);
        if(isprime(i))
        {
            if(isprime(i+2))
                count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}