// 测试点4段错误

#include<stdio.h>
#include<stdlib.h>
int cmp (const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n,i,j;
    double p;
    int a[100000];
    scanf("%d%lf",&n,&p);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    int max = 0;
    // for(i = n-1; i >= 0; i--)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         if(a[i] <= a[j] * p)
    //         {
    //             if( i - j + 1 > max)
    //             {
    //                 max = i - j + 1;
    //             }
                
    //         }
    //     }
    // }
    for(i = 0,j = 0; j < n; i++)
    {
        while(j < n && a[j] <= 1L * a[i] * p) //1强制为long型
        {
            j++;
        }
        if(max < j -i)
        {
            max = j -i;
        }
    }
    printf("%d",max);
    return 0;
}