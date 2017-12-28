#include<stdio.h>
int main()
{
    int n,i,j;
    int a[110];
    char c1,c2,c;
    j = 0;
    scanf("%d%*c",&n);

    while(n--)
    {
        int flag = 0;
        for(i = 0; i < 4; i++)
        {
            scanf("%c-%c%*c",&c1,&c2);
            if(c2 == 'T')
            {
                flag = 1;
                c = c1;
            }
        }
        // printf("c = %c\n",c);
        if(flag)
        {
            if(c == 'A')
            {
                a[j] = 1;
                j++;
            }
            else if(c == 'B')
            {
                a[j] = 2;
                j++;
            }
            else if(c == 'C')
            {
                a[j] = 3;
                j++;
            }
            else if(c == 'D')
            {
                a[j] = 4;
                j++;
            }
        }
        // printf("a[%d]= %d",j-1,a[j-1]);
    }
    for(i = 0; i < j; i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}