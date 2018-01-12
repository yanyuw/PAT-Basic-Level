#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp (const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}
int main()
{
    int N,i,m,n;
    int a[10000];

    scanf("%d",&N);
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,N,sizeof(a[0]),cmp);
    //m是大于sqrt(N)且能整除N的最小整数
    for(m = 1; ;m++)
    {
        if(m * m >= N && N % m == 0)
        {
            break;
        }
    }
    n = N / m;
    // n = sqrt(N);
    // while(N % n != 0)
    // {
    //     n--;
    // }
    // m = N / n;
    
    int b[m][n], mark[m][n], dx[4] = { 0, 1, 0, -1},dy[4] = {1,0,-1,0};
    int di = 0,j,k = 0;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            mark[i][j] = 0;
        }
    }
    i = j = 0;
    while(k < N)
    {
        b[i][j] = a[k++];
        mark[i][j] = 1;
        
        int ni = i + dx[di], nj = j + dy[di];
        if(ni < 0 || ni >= m || nj < 0 || nj >= n || mark[ni][nj])
        {
            di = (di + 1) % 4;
        }

        i += dx[di];
        j += dy[di];
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d",b[i][j]);
            if(j + 1 < n)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}