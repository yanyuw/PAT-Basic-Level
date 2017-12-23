// 测试点4 6
#include<stdio.h>
#include<math.h>


int main()
{
    char f1,f2;
    int a,b,c;
    scanf("%c",&f1);
    scanf("%d.%dE%c%d",&a,&b,&f2,&c);
    
    if(f1 == '-')
    {
        printf("-");
    }
    if(f2 == '-')
    {
        printf("0.");
        c -= 1;
        while(c--)
        {
            printf("0");
        }
        printf("%d%d",a,b);
    }
    else
    {
        printf("%d",a);
        int count = 1;
        int tmp = b;
        while(tmp >= 10)
        {
            count++;
            tmp /= 10;
        }
        if(count >= c)
        {
            printf("%g",b / pow(10,count-c));
        }
        else
        {
            printf("%d",b);
            c -= count;
            while(c--)
            {
                
                printf("0");
            }
        }
        
    }

    return 0;
}
