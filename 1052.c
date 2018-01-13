#include<stdio.h>
int main()
{
    char face[3][15][5] = {'0'},c;
    int i,j,k,a[10],count[5]= {0};
    for(i = 0; i < 3; i++)
    {
        for(j = 0; (c = getchar()) != '\n'; )
        {
            if(c == '[')
            {
                scanf("%[^]]", face[i][j]);
                j++;
            }
        }
        count[i] = j;
    }

    scanf("%d",&k);
    while(k--)
    {
        int flag = 1;
        for(i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
            if(i == 0 || i == 4)
            {
                if(a[i] > count[0] || a[i] <= 0 || a[i] > 10)
                {
                    flag = 0;
                }
            }
            if(i == 1 || i == 3)
            {
                if(a[i] > count[1] || a[i] <= 0 || a[i] > 10)
                {
                    flag = 0;
                }
            }
            if(i == 2)
            {
                if(a[i] > count[2] || a[i] <= 0 || a[i] > 10)
                {
                    flag = 0;
                }
            }
        }
        if(flag)
        {
            printf("%s(%s%s%s)%s\n",face[0][a[0]-1], face[1][a[1]-1], face[2][a[2]-1], face[1][a[3]-1], face[0][a[4]-1]);
        }
        else
        {
            printf("Are you kidding me? @\\/@\n");
        }
    }
    return 0;
}
