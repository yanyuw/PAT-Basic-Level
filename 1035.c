#include<stdio.h>
#include<stdlib.h>

int cmp (const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n,i,length,j;
    int count = 0;
    int a[1000],b[1000],c[1000];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    // for(i = n -1; i >= 0; i--)
    // {
    //     if(b[i] != a[i])
    //     {
    //         break;
    //     }   
    // }
    // count = i;
    // // printf("%d",count);
    // for(i = count; i > 0; i--)
    // {
    //     if(b[i] < b[i-1])
    //     {
    //         break;
    //     }
    // }
    // if(i == 0)
    // {
    //     int j;
    //     printf("Insertion Sort\n");
    //     for(j = 0; j <= count + 1; j++)
    //     {
    //         c[j] = b[j];
    //     }
    //     // printf("j=%d",j);
    //     qsort(c,j,sizeof(c[0]),cmp);
    //     for(j = 0; j <= count + 1;j++)
    //     {
    //         printf("%d ",c[j]);
    //     }
    //     for(j = count + 2; j < n; j++)
    //     {
    //         if(j != n-1)
    //         {
    //             printf("%d ",b[j]);
    //         }
    //         else
    //         {
    //             printf("%d\n",b[j]);
    //         }
    //     }
    // }
    for(i = 0; i < n-1 && b[i] <= b[i+1]; i++);
    for(length = ++i; i < n && b[i] == a[i]; i++);

    if(i == n)
    {
        length++;
        printf("Insertion Sort\n");
        qsort(a, length, sizeof(a[0]),cmp);
    }
    else
    {
        printf("Merge Sort\n");
        for(length = 1, i = 0; i < n && length <= n; length *= 2)
        {
            for(i = 0; i < n && a[i] == b[i]; i++) ; 
            for(j = 0; j < n / length; j++)
                qsort(a + j * length, length, sizeof(int), cmp);
            qsort(a + j * length, n % length, sizeof(int), cmp);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(i != n-1)
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("%d\n",a[i]);
        }
    }



    return 0;
}