// 测试点3

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void str_tolower(char s[])
{
    int i = 0;
    while (s[i])
    {
        s[i] = tolower(s[i]);
        i++;
    }
}
int main()
{
    char a[11000];
    int i,lena,sum,sum0,sum1;

    fgets(a,11000,stdin); // 不能用scanf 字符串中可能存在空格
    str_tolower(a);
    lena = strlen(a);
    sum = 0;
    sum1 = 0;
    sum0 = 0;

    for(i = 0; i < lena; i++)
    {
        if(a[i] == '\n')
        {
            break;
        }
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            sum += a[i] - 'a' + 1;
        }
    }
    while(sum != 0)
    {
        if(sum % 2 == 0)
        {
            sum0++;
        }
        else
        {
            sum1++;
        }
        sum = sum / 2;
    }
    printf("%d %d",sum0,sum1);


    return 0;
}