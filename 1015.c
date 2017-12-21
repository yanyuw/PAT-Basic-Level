// 部分正确，段错误
#include<stdio.h>
#include<string.h>


int main()
{
    int n,l,h,i,x,j,k,r,t,count;
    int a[10000],b[10000],c[10000],d[10000];
    char id[10000][10];
    int score1[10000],score2[10000];

    scanf("%d%d%d",&n,&l,&h);
    j=0;
    k=0;
    r=0;
    t=0;
    
    for(i = 0; i < n; i++)
    {
        scanf("%s%d%d",id[i],&score1[i],&score2[i]);
        if(score1[i] < l || score2[i] < l)
        {
            count++;
        }
        else if(score1[i] >= h && score2[i] >= h)
        {
            a[j] = i;
            j++;
        }
        else if(score1[i] >= h && score2[i] < h)
        {
            b[k] = i;
            k++;
        }
        else if(score1[i] < h && score2[i] < h && score1[i] > score2[i])
        {
            c[r] = i;
            r++;
        }
        else
        {
            d[t] = i;
            t++;
        }
    }

    for(i = 0; i < j-1; i++)
    {
        for(x = 0; x < j-1-i; x++)
        {
            if((score1[a[x]] + score2[a[x]]) < (score1[a[x+1]] + score2[a[x+1]]))
            {
                int tmp = a[x];
                a[x] = a[x+1];
                a[x+1] = tmp;
            }
            if((score1[a[x]] + score2[a[x]]) == (score1[a[x+1]] + score2[a[x+1]]))
            {
                if(score1[a[x]] < score1[a[x+1]])
                {
                    int tmp = a[x];
                    a[x] = a[x+1];
                    a[x+1] = tmp;
                }
                if(score1[a[x]] == score1[a[x+1]])
                {
                    if(strcmp(id[a[x]],id[a[x+1]]) < 0)
                    {
                        int tmp = a[x];
                        a[x] = a[x+1];
                        a[x+1] = 
                        tmp;
                    }
                }
            }
        }
    }
    for(i = 0; i < k-1; i++)
    {
        for(x = 0; x < k-1-i; x++)
        {
            if((score1[b[x]] + score2[b[x]]) < (score1[b[x+1]] + score2[b[x+1]]))
            {
                int tmp = b[x];
                b[x] = b[x+1];
                b[x+1] = tmp;
            }
            if((score1[b[x]] + score2[b[x]]) == (score1[b[x+1]] + score2[b[x+1]]))
            {
                if(score1[b[x]] < score1[b[x+1]])
                {
                    int tmp = b[x];
                    b[x] = b[x+1];
                    b[x+1] = tmp;
                }
                if(score1[b[x]] == score1[b[x+1]])
                {
                    if(strcmp(id[b[x]],id[b[x+1]]) < 0)
                    {
                        int tmp = b[x];
                        b[x] = b[x+1];
                        b[x+1] = tmp;
                    }
                }
            }
        }
    }
    for(i = 0; i < r-1; i++)
    {
        for(x = 0; x < r-1-i; x++)
        {
            if((score1[c[x]] + score2[c[x]]) < (score1[c[x+1]] + score2[c[x+1]]))
            {
                int tmp = c[x];
                c[x] = c[x+1];
                c[x+1] = tmp;
            }
            if((score1[c[x]] + score2[c[x]]) == (score1[c[x+1]] + score2[c[x+1]]))
            {
                if(score1[c[x]] < score1[c[x+1]])
                {
                    int tmp = c[x];
                    c[x] = c[x+1];
                    c[x+1] = tmp;
                }
                if(score1[c[x]] == score1[c[x+1]])
                {
                    if(strcmp(id[c[x]],id[c[x+1]]) < 0)
                    {
                        int tmp = c[x];
                        c[x] = c[x+1];
                        c[x+1] = tmp;
                    }
                }
            }
        }
    }
    for(i = 0; i < t-1; i++)
    {
        for(x = 0; x < t-1-i; x++)
        {
            if((score1[d[x]] + score2[d[x]]) < (score1[d[x+1]] + score2[d[x+1]]))
            {
                int tmp = d[x];
                d[x] = d[x+1];
                d[x+1] = tmp;
            }
            if((score1[d[x]] + score2[d[x]]) == (score1[d[x+1]] + score2[d[x+1]]))
            {
                if(score1[d[x]] < score1[d[x+1]])
                {
                    int tmp = d[x];
                    d[x] = d[x+1];
                    d[x+1] = tmp;
                }
                if(score1[d[x]] == score1[d[x+1]])
                {
                    if(strcmp(id[d[x]],id[d[x+1]]) < 0)
                    {
                        int tmp = d[x];
                        d[x] = d[x+1];
                        d[x+1] = tmp;
                    }
                }
            }
        }
    }

    printf("%d\n",n-count);
    for(i = 0; i < j; i++)
    {
        printf("%s %d %d\n",id[a[i]],score1[a[i]],score2[a[i]]);
    }
    for(i = 0; i < k; i++)
    {
        printf("%s %d %d\n",id[b[i]],score1[b[i]],score2[b[i]]);
    }
    for(i = 0; i < r; i++)
    {
        printf("%s %d %d\n",id[c[i]],score1[c[i]],score2[c[i]]);
    }
    for(i = 0; i < t; i++)
    {
        printf("%s %d %d\n",id[d[i]],score1[d[i]],score2[d[i]]);
    }


    return 0;
}