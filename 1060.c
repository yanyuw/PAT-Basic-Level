// 测试点3;

#include<stdio.h>
#include<stdlib.h>
// int cmp(const void *a, const void *b)
// {
//     int x = *(int *)a;
//     int y = *(int *)b;
//     if(x > y)
//     {
//         return -1;
//     }
//     else if(x < y)
//     {
//         return 1;
//     }
//     return 0;
// }
int main()
{
    int n,i,e,count,j;
    int a[100000];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    e = n;
    while(e--)
    {
        count = 0;
        for(i = 0; i < n; i++)
        {
            if(a[i] > e)
            {
                count++;
            }
        }
        if(count >= e)
        {
            printf("%d",e);
            break;
        }
    }
    // for(i = 0; i < n - 1; i++)
    // {
    //     for(j = 0; j < n - 1 - i; j++)
    //     {
    //         if(a[j+1] > a[j])
    //         {
    //             int tmp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = tmp;
    //         }
    //     }
    // }
    // qsort(a,n,sizeof(int),cmp);
    // for(i = 0; i < n; i++)
    // {
    //     if(a[i] <= i+1)
    //     {
    //         printf("%d",i);
    //         break;
    //     }
    // }
    return 0;
}