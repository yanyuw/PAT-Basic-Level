#include<stdio.h>
int gcd(int a,int b)
{
    if (b == 0) 
        return a;
    else 
        return gcd(b,a%b);
}
int main()
{
    double n1,m1,n2,m2,a,b,k,i,c;
    scanf("%lf/%lf",&n1,&m1);
    scanf("%lf/%lf",&n2,&m2);
    a = n1/m1;
    b = n2/m2;

    if(a > b)
    {
        double tmp = a;
        a = b;
        b = tmp;
    }
    int flag = 1;
    scanf("%lf",&k);
    for(i = 1; i < k * b; i++)
    {
       c = i / k;
       if(c < b && c > a)
       {
           if(gcd(i,k) == 1)
           {
               if(flag)
               {
                   printf("%.0lf/%.0lf",i,k);
                   flag = 0;
               }
               else
               {
                   printf(" %.0lf/%.0lf",i,k);
               }
           }

       }
       
    }

    return 0;
}