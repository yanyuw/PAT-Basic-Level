#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,max,min,score;
    char name[11],num[11];
    char maxname[11],minname[11],maxnum[11],minnum[11];

    scanf("%d",&n);
    max = 0; 
    min = 100;
    for(i = 0; i < n; i++)
    {
        scanf("%s%s%d",name,num,&score);
        // printf("name=%s num=%s\n",name,num);
        if(score > max)
        {
            max = score;
            strcpy(maxname,name);
            strcpy(maxnum,num);
        }
        if(score < min)
        {
            min = score;
            strcpy(minname,name);
            strcpy(minnum,num);
        }
    }
    printf("%s %s\n",maxname,maxnum);
    printf("%s %s\n",minname,minnum);

    return 0;
}