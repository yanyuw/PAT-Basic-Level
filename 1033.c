// 测试点4

#include<stdio.h>
#include<string.h>
int main()
{  
    int i,j,lene,leni,flag = 0;
    char err[11000],in[11000];
    fgets(err,11001,stdin);
    fgets(in,11001,stdin);
    // printf("err=%sin =%s",err,in);
    lene = strlen(err)-1;
    leni = strlen(in)-1;
    
    if(lene == 0)
    {
        printf("%s",in);
        return 0;
    }
    for(i = 0; i < lene; i++)
    {
        if(err[i] == '+')
        {
            flag = 1;
            err[i] = ' ';
            break;
        }
    }
    if(flag)
    {
        for(i = 0; i < leni; i++)
        {
            if(in[i] >= 'A' && in[i] <= 'Z')
            {
                in[i] = ' ';
            }
        }
    }
    for(i = 0; i < lene; i++)
    {
        for(j = 0; j < leni; j++)
        {
            if(err[i] == in[j])
            {
                in[j] = ' ';
            }
            if(err[i] >= 'A' && err[i] <= 'Z' && in[j] == err[i] + 'a' - 'A')
            {
                in[j] = ' ';
            }
        }
    }
    for(i = 0; i < leni; i++)
    {
        if(in[i] != ' ')
        {
            printf("%c",in[i]);
        }
    }
    

    
    return 0;
}