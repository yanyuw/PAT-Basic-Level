#include<stdio.h>
#include<string.h>
int main()
{
    int lena,i,P = 0,A = 0,T = 0,e = 0,s = 0,t = 0;
    char a[11000];
    
    scanf("%s",a);
    lena = strlen(a);
    for(i = 0; i < lena; i++)
    {
        if(a[i] == 'P')
        {
            P++;
        }
        if(a[i] == 'A')
        {
            A++;
        }
        if(a[i] == 'T')
        {
            T++;
        }
        if(a[i] == 'e')
        {
            e++;
        }
        if(a[i] == 's')
        {
            s++;
        }
        if(a[i] == 't')
        {
            t++;
        }
    }

    
    while(P || A || T || e || s || t)
    {
        if(P)
        {
            printf("P");
            P--;
        }
        if(A)
        {
            printf("A");
            A--;
        }
        if(T)
        {
            printf("T");
            T--;
        }
        if(e)
        {
            printf("e");
            e--;
        }
        if(s)
        {
            printf("s");
            s--;
        }
        if(t)
        {
            printf("t");
            t--;
        }        
    }        
    return 0;
}