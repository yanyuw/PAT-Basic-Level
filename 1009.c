// 测试点3错误

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j = 0,k,count = 0,lena;
    char a[100],b[100][100];

    fgets(a,81,stdin);
    lena = strlen(a);
    // printf("lena=%d",lena);
    for(i = 0; i < lena; i++)
    {
        if(a[i] == ' ' || a[i] == '\n')
        {
            count++;
            j++;
            k = 0;
        }
        else
        {
            b[j][k] = a[i];
            k++;
            // printf("%s",b[j]);
        }
        // printf("count = %d",count);
        // printf("b[%d] = %s\n",j,b[j]);
    }

    for(i = count- 1; i >= 0; i--)
    {
        
        if(i != 0)
        {
            printf("%s ",b[i]);
        }
        else
        {
            printf("%s",b[i]);
        }
    }
    
    return 0;
}