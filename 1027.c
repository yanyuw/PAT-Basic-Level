#include<stdio.h>
#include<math.h>

int main()
{
    int n,l,i,j,count = 0,sum;
    char c;
    scanf("%d%*c%c",&n,&c);
    l = sqrt(n * 2 + 2) / 2;
    sum = l * l + (l * l - 1);
    // printf("sum=%d",sum);
    for(i = l; i >= 1; i--)
    {
        for(j = 0; j < count; j++)
        {
            printf(" ");
        }
        for(j = 0; j < 2 * i - 1; j++)
        {
            printf("%c",c);
        }
        printf("\n");
        count++;
    }
    count--;
    for(i = 2; i <= l; i++)
    {
        count--;
        for(j = 0; j < count; j++)
        {
            printf(" ");
        }
        for(j = 0; j < 2 * i -1; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d",n-sum);

    
    return 0;
}