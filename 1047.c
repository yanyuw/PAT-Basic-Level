#include<stdio.h>
int main()
{
    int n,i,tmp1,tmp2,count,maxt,maxs;
    int score[1100] = {0},team[1100] = {0};

    count = 0;
    maxt = 0;
    maxs = 0;

    scanf("%d",&n);
    while(n--)
    {
        int flag = 1;
        scanf("%d-%*d",&tmp1);
        for(i = 0; i <= count; i++)
        {
            if(team[i] == tmp1)
            {
                flag = 0;
            }
        }
        if(flag)
        {
            team[count] = tmp1;
            // printf("team[%d]=%d",count,team[count]);
            count++;
        }
        // printf("count=%d",count);
        scanf("%d",&tmp2);
        score[tmp1] += tmp2;
    }
    for(i = 0; i < count; i++)
    {
        if(score[team[i]] > maxs)
        {
            maxt = team[i];
            maxs = score[team[i]];
        }
    }
    printf("%d %d",maxt,maxs);

    return 0;
}