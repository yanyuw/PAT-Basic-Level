#include<stdio.h>
int main()
{
    int n,m,i,j,count1,count2;
    int thing[10000] = {0},wrong[10];
    char name[10];
    
    count1 = count2 = 0;

    scanf("%d%d",&n,&m);
    for(i = 0; i < m; i++)
    {
        int tmp;
        scanf("%d",&tmp);
        thing[tmp] = 1;
    }

    for(i = 0; i < n; i++)
    {
        int count,tmp,flag = 0,j,k = 0;

        scanf("%s%d",name,&count);
        while(count--)
        {
            scanf("%d",&tmp);
            if(thing[tmp])
            {
                wrong[k] = tmp;
                count1++;
                k++;
                flag = 1;
            }
        }
        if(flag)
        {
            count2++;
            printf("%s:",name);
            for(j = 0; j < k; j++)
            {
                printf(" %04d",wrong[j]);
            }
            printf("\n");
        }
    }
    printf("%d %d",count2,count1);
    return 0;
}