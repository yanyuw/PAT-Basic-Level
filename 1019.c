#include<stdio.h>
int main()
{
    int a,i,j,flag = 0,m = 0,n = 0;
    int b[5];

    scanf("%d",&a);
    b[0] = a / 1000;
    b[1] = a % 1000 / 100;
    b[2] = a % 100 / 10;
    b[3] = a % 10;
    if(a % 1111 == 0)
    {
        printf("%d - %d = 0000",a,a);
        return 0;
    }
    else
    while(1)
    {
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3-i; j++)
            {
                if(b[j] < b[j+1])
                {
                    int tmp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = tmp;
                }
            }
        }
        m = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];

        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3-i; j++)
            {
                if(b[j] > b[j+1])
                {
                    int tmp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = tmp;
                }
            }
        }
        n = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];

        a = m - n;
        printf("%04d - %04d = %04d\n",m,n,a);
        if(a == 6174)
            break;
        b[0] = a / 1000;
        b[1] = a % 1000 / 100;
        b[2] = a % 100 / 10;
        b[3] = a % 10;
    }
    return 0;
}