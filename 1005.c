#include<stdio.h>
int main()
{
    int n,i,j,k = 0,temp;
    int a[100],b[100],flag[10000] = {0};

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n; i++)
    {
        temp = a[i];
        while(temp != 1)
        {
            if(temp % 2 == 1)
            {
                temp = (3 * temp + 1) / 2;
                flag[temp] = 1;
            }
            else
            {
                temp /= 2;
                flag[temp] = 1;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        if(flag[a[i]] == 0)
        {
            b[k] = a[i];
            k++;
        }
    }
    
    for(i = k-1; i > 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(b[j+1] > b[j])
            {
                int tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
            }
        }
    }

    for(i = 0; i < k; i++)
    {
        if(i != k-1)
        {
            printf("%d ",b[i]);
        }
        else
        {
            printf("%d",b[i]);
        }
    }
    
    return 0;
}