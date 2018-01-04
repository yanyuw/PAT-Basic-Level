#include<stdio.h>
#include<string.h>
int main()
{
    int i,lena,count = 0;
    char compress,tmp = '0';
    char a[1100],b[1100];
    
    if(getchar() == 'C')
    {
        getchar();
        fgets(a,1100,stdin);
        // printf("a=%s",a);
        lena = strlen(a);
        for(i = 0; i < lena; i++)
        {
            if(i)
            {
                if(a[i] != tmp)
                {
                    if(count == 1)
                    {
                       printf("%c",tmp);
                    }    
                    else
                    {
                        printf("%d%c",count,tmp);
                    }

                    count = 0;
                } 
            }
            tmp = a[i];
            count++;
        }
    }
    else
    {
        getchar();
        int flag = 0;
        count = 1;
        while(1)
        {
            scanf("%c",&tmp);
            // printf("tmp=%c",tmp);
            if(tmp == '\n')
                break;
            if(tmp >= '0' && tmp <= '9')
            {
                if(flag)
                {
                    count *= 10;
                    count += tmp -'0';
                    // printf("%d\n",count);
                    flag = 1;
                }
                else
                {
                    count = tmp - '0';
                    // printf("c%d\n",count);
                    flag = 1;
                }

                // printf("count=%d",count);
                continue;
            }
            else
            {
                flag = 0;
                while(count--)
                {
                    printf("%c",tmp);
                }
            }
            count = 1;
        }
    }
    return 0;
}