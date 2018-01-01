#include<stdio.h>
int isPrime(int n)
{
    if(n == 1)
        return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n,k,i,id;
    int award[10000] = {0};
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&id);
        if(i == 1)
        {
            award[id] = 1;
        }
        else if(isPrime(i))
        {
            award[id] = 2;
        }
        else
        {
            award[id] = 3;
        }
    }
    scanf("%d",&k);
    for(i = 1; i <= k; i++)
    {
        scanf("%d",&id);
        if(award[id] == -1)
        {
            printf("%04d: Checked\n",id); 
        }
        else if(award[id] == 0)
        {
            printf("%04d: Are you kidding?\n",id);
        }
        else if(award[id] == 1)
        {
            printf("%04d: Mystery Award\n",id);
            award[id] = -1;
        }
        else if(award[id] == 2)
        {
            printf("%04d: Minion\n",id);
            award[id] = -1;
        }
        else if(award[id] == 3)
        {
            printf("%04d: Chocolate\n",id);
            award[id] = -1;
        }
    }
    return 0;
}