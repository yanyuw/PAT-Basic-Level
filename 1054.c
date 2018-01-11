// 测试点2
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,count = 0;
    double sum = 0,ave;
    char a[100] ={0};
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        int flag = 1,dot = 0,a1 = 0,a2 = 0;
        scanf("%s",a);
        for(j = 0; a[j] != '\0'; j++)
        {
            if(a[0] == '-')
            {
                continue;
            }
            if((a[j] < '0' || a[j] > '9') && a[j] != '.')
            {
                flag = 0;
                break;
            }
            if(dot == 1 && a[j] == '.')
            {
                flag = 0;
                break;
            }
            if(a[j] == '.')
            {
                dot = 1;
            }
            else
            { 
                if(dot)
                {
                    a1++;
                }
                else
                {
                    a2++;
                }
            }
        }
        if(a1 > 2)
        {
            flag = 0;
        }
        if(atof(a) < -1000.0 || atof(a) > 1000.0)
        {
            flag = 0;
        }
        if(flag)
        {
            sum += atof(a);
            count++;
        }
        else
        {
            printf("ERROR: %s is not a legal number\n",a);
        }
    }
    ave = sum / count ;
    if(count == 0)
    {
        printf("The average of %d numbers is Undefined\n",count);
    }
    if(count == 1)
    {
        printf("The average of 1 number is %.2f\n",sum);
    }
    if(count >= 2)
    {
        printf("The average of %d numbers is %.2f\n",count,ave);
    }
    return 0;
}