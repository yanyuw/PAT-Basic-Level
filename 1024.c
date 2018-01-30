#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    char f1,f2;
    int a,c,i,lenb;
    char b[100000];
    scanf("%c",&f1);
    scanf("%d.",&a);
    // scanf("%[^E]",b);
    for(i = 0; ; i++)
    {
        scanf("%c",&b[i]);
        if(b[i] == 'E')
        {
            b[i] = '\0';
            break;
        }
    }
    // printf("b=%s",b);
    scanf("%c%d",&f2,&c);
    
    if(f1 == '-')
    {
        printf("-");
    }
    
    if(c == 0)
    {
        printf("%d.%s",a,b);
        return 0;
    }

    if(f2 == '-')
    {
        printf("0.");
        c -= 1;
        while(c--)
        {
            printf("0");
        }
        printf("%d%s",a,b);
    }
    else
    {
        printf("%d",a);
        lenb = strlen(b);
        if(lenb > c) // 不能是>=! 会多输出一个小数点造成测试点4错误
        {
            for(i = 0; i < lenb; i++)
            {
                printf("%c",b[i]);
                if(i == c - 1)
                {
                    printf(".");
                }
            }
        }
        else
        {
            printf("%s",b);
            c -= lenb;
            while(c--)
            {
                
                printf("0");
            }
        }
        
    }

    return 0;
}
