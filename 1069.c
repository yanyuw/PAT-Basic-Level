// 测试点3
#include<stdio.h>
#include<string.h>

int main()
{
    int m,n,s,i,j,flag;
    char name[1100][20] = {'0'},got[1100][20] = {'0'};
    j = 0;

    scanf("%d%d%d",&m,&n,&s);
    for(i = 0; i < m; i++)
    {
        scanf("%s",name[i]);
    }

    if(s > m || m < n)
    {
        printf("Keep going...");
        return 0;
    }
    for(i = s - 1; i < m; )
    {
        flag = 1;
        int k = 0;
        while(k <= j)
        {
            if(strcmp(got[k],name[i]) == 0)
            {
                i++;
                flag = 0;
                break;
            }
            k++;
        }
        if(flag)
        {
            strcpy(got[j],name[i]);
            j++;
            printf("%s\n",name[i]);
            i += n;
        }
    }
    return 0;
}