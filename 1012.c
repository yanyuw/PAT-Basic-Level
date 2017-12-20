#include<stdio.h>
int main()
{
    int n,i,a1,a2,a3,a5,count,sum,flag;
    int a[1100];
    double A[6] = {0};
    
    count = 1;
    sum = 0;
    flag = 0;

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] % 5 == 0 && a[i] % 2 == 0)
        {
            A[1] += a[i];
        }
        if(a[i] % 5 == 1)
        {
            flag = 1;
            if(count % 2 == 1)
            {
                A[2] += a[i];
                count++;
            }
            else
            {
                A[2] -= a[i];
                count++;
            }
        }
        if(a[i] % 5 == 2)
        {
            A[3]++;
        }
        if(a[i] % 5 == 3)
        {
            A[4] += a[i];
            sum++;
        }
        if(a[i] % 5 == 4)
        {
            if(a[i] > A[5])
            {
                A[5] = a[i];
            }
        }
    }
    if(A[4] != 0)
    {
        A[4] /= sum;
        // printf("A[4]=%.1f",A[i]);
    }
    
    // printf("%d",flag);

    for(i = 1; i < 6; i++)
    {
        if(A[i] == 0 && i != 2)
            printf("N");
        else if(i == 2)
        {
            if(flag)
                printf("%d",(int)A[i]);
            else
                printf("N");
        }
        else if(i != 4)
            printf("%d",(int)A[i]);
        else 
        {   if((int)A[i] != 0)
            printf("%.1lf",A[i]);}
        if(i != 5)
            printf(" ");
    }
    

    return 0;
}