#include<stdio.h>
#include<string.h>
int main()
{
    int i,lena,flag = 1,count = 0;
    char a[1100]={0},b[1100]={0},c[1100]={0};
    scanf("%s",a);
    while(1)
    {
        lena = strlen(a);
        int tmp = 0;
        flag = 1;
        if(count >= 10)
        {
            printf("Not found in 10 iterations.");
            return 0;
        }
        // printf("%d",lane)
        for(i = 0; i < lena / 2; i++)
        {
            if(a[i] != a[lena - 1 -i])
            {
                flag = 0;
                break;
            }
            // printf("flag=%d",flag);
        }
        if(flag)
        {
            printf("%s is a palindromic number.",a);
            return 0;
        }
        else
        {
            printf("%s + ",a);
            for(i = lena - 1; i >= 0; i--)
            {
                b[i] = a[lena - i - 1];

                if(tmp == 1)
                {
                    c[i] = a[i] + b[i] - '0' + 1;
                    if(c[i] - '0' >= 10)
                    {
                        tmp = 1;
                        c[i] -= 10;
                    }
                    else
                    {
                        tmp = 0;
                    }
                }
                else
                {
                    c[i] = a[i] + b[i] - '0' ;
                    if(c[i] - '0' >= 10)
                    {
                        tmp = 1;
                        c[i] -= 10;
                    }
                    else
                    {
                        tmp = 0;
                    }
                }  
            }
                        // printf("c=%s",c);
            strcpy(a,c);
            if(tmp)
            {
                for(i = lena; i > 0; i--)
                {
                    a[i] = a[i-1];
                }
                a[0] = '1';
                lena++;
            }

            printf("%s = %s\n",b,a);
            count++;
            
        }
    }

    return 0;
}