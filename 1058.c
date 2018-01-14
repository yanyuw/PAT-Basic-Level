#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct test
{
    int score;
    int right;
    int wrong;
}t[110];

int readanswer()
{
    char c;
    int count, answer = 0;
    scanf("%d", &count);
    for(int k = 0; k < count; k++)
    {
        while((c = getchar()) == ' ');
        answer |= 1 << (c - 'a');
    }
    return answer;
}

int main()
{
    int n,m,i,j,k,max = 0,tmp;

    scanf("%d%d",&n,&m);

    for(i = 0; i < m; i++)
    {
        scanf("%d%d",&t[i].score,&tmp);
        t[i].wrong = 0;
        t[j].right = readanswer(); 
    }

    for(i = 0; i < n; i++)
    {
        int grade = 0;
        for(j = 0; j < m; j++)
        {   
            while(getchar() != '(');
            if(readanswer() == t[j].right)
            {
                grade += t[j].score;
            }
            else if(max < ++t[j].wrong)
            {
                max = t[j].wrong;
            }
            while(getchar() != ')');
        }
        printf("%d\n",grade);
    }
    // for(i = 0; i < m; i++)
    // {
    //     printf("%d\n",t[j].wrong);
    // }



    if(max == 0)
    {
        printf("Too simple");
    }
    else
    {
        printf("%d",max);
        for(i = 0; i < m; i++)
        {
            if(t[i].wrong == max)
            {
                printf(" %d", i+1);
            }
        }
    }

    return 0;
}