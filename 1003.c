#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,lena,p,t,a1,a2,a3,flag;
    char a[100];

    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        lena = strlen(a);
        flag = 1;
        p = -1;
        t = -1;
        
        for(i = 0; i < lena; i++)
        {
            if(a[i] != 'P' && a[i] != 'A' && a[i] != 'T')
            {
                printf("NO\n");
                flag = 0;
                break;
            }
            if(a[i] == 'P') 
            {
                p = i;
            }
            if(p == -1 && a[i] !='A')
            {
                flag = 0;
                printf("NO\n");
                break;
            }

            if(a[i] == 'T')
            {
                t = i;
            }
            if(t != -1 && t != i && a[i] !='A')
            {
                printf("NO\n");
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            a1 = p;
            a2 = t - p - 1;
            a3 = lena - t -1;
            if(a1 == 0 && a3 == 0 && a2 > 0)
            {
                printf("YES\n");
            }
            else if(a1 != 0 && a3 != 0 && (a1 * a2 == a3))
            {
                printf("YES\n");
            }
            else 
                printf("NO\n");  
        }      
    }

    return 0;
}