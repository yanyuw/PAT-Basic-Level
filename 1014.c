#include<stdio.h>
#include<string.h>
int main()
{
    int i,len1,len2,count = 0;
    char a[100],b[100],c[100],d[100];
    char day[10][10] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

    scanf("%s%s%s%s",a,b,c,d);
    len1 = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    len2 = strlen(c) > strlen(d) ? strlen(c) : strlen(d);
    // printf("len1=%d len2=%d",len1,len2);
    // printf("a=%s b=%s c=%s d=%s",a,b,c,d);
    for(i = 0; i < len1; i++)
    {
        if(a[i] == b[i])
        {
            if(a[i] >= 'A' && a[i] <= 'G')
            {
                if(count == 0)
                {
                    printf("%s ",day[a[i]-'A']);
                    count++;
                    continue;
                }
            }
            if((a[i] >= 'A' && a[i] <= 'N') || (a[i] >= '0' && a[i] <= '9'))
            {
                if(count == 1)
                {
                    if(a[i] >= '0' && a[i] <= '9' && b[i] >= '0' && b[i] <= '9')
                    {
                        printf("%02d:",a[i]-'0');
                    }
                    else
                    {
                        printf("%d:",a[i]-'A'+10);
                    }
                    count++;
                }
            }
        }
        if(count > 2)
            break;
    }
    for(i = 0; i < len2; i++)
    {
        if(c[i] == d[i])
        {
            if((c[i] >= 'A' && c[i] <= 'Z')||(c[i] >= 'a' && c[i] <= 'z'))
            {
                if(c[i] == d[i])
                printf("%02d",i);
            }
        }
    }
    return 0;
}