#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char mars1[15][5] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char mars2[15][5] = {"0","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    scanf("%d",&n);
    while(n--)
    {
        char tmp[10];
        scanf("%s",tmp);
        if(tmp[0] >= '0' && tmp[0] <= '9')
        {
            int count = 1,a = 0,lent;
            
            lent = strlen(tmp);
            for(i = lent - 1; i >= 0; i--)
            {
                a += (tmp[i] - '0') * count;
                count *= 10;
            }
            // printf("%d",a);
            if(a / 13 == 0)
            {
                printf("%s\n",mars1[a % 13]);
            }
            else
            {
                if(a % 13 != 0)
                {
                    printf("%s ",mars2[a / 13]);
                    printf("%s\n",mars1[a % 13]);
                }
                else
                {
                    printf("%s\n",mars2[a / 13]);
                }

            }
        }
        else
        {
            int flag = 1,a = 0;
            for(i = 1; i < 13; i++)
            {
                if(strcmp(tmp,mars2[i]) == 0)
                {
                    if(getchar() == '\n')
                    {
                        flag = 2;
                        break;

                    }
                    else
                    {
                        flag = 0;
                        a += i * 13;
                        break;
                    }

                }
            }
            // printf("%d",flag);
            if(flag == 1)
            {
                for(i = 0; i < 13; i++)
                {
                    if(strcmp(tmp,mars1[i]) == 0)
                    {
                        a += i;
                    }
                }
            }
            else if(flag == 2)
            {   
                a += i * 13;
            }
            else
            {
                scanf("%s",tmp);
                for(i = 0; i < 13; i++)
                {
                    if(strcmp(tmp,mars1[i]) == 0)
                    {
                        a += i;
                        break;
                    }
                }
            }
            printf("%d\n",a);
        }
    }
    return 0;
}