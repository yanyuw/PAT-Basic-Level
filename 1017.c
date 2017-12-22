#include<stdio.h>
#include<string.h>
int main()
{
    char a[1100],q[1100];
    int b,r = 0,lena,i,j = 0;
    scanf("%s %d",a,&b);
    lena = strlen(a);
    for(i = 0; i < lena; i++)
    {
        r = 10 * r + a[i] - '0';
        if(i == 0 && lena > 1 && r < b);
        else
        {
            q[j] = r / b + '0';
            j++;
            r = r % b;
            if(i == lena -1)
            {
                q[j] = '\0';
            }
        }
    }
    printf("%s %d",q,r);
    

    return 0;
}