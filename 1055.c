// 测试点1 3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[10];
    int height;
}s[10000];

int cmp(const void *a,const void *b)
{

    struct student s1 = *(struct student*)a;
    struct student s2 = *(struct student*)b;
    if(s1.height != s2.height)
        return s2.height - s1.height;
    return strcmp(s1.name, s2.name);
}
int main()
{
    int n,k,i,j,row,frow,count = 1;
    scanf("%d%d",&n,&k);
    row = n / k;
    frow = (n / k) + (n % k);
    for(i = 0; i < n; i++)
    {
        scanf("%s%d",s[i].name,&s[i].height);
    }
    qsort(s,n,sizeof(s[0]), cmp);
    // for(i = 0; i < n ;i++)
    // {
    //     printf("%s ",s[i].name);
    // }
    for(i = 0; i < k; i++)
    {
        if(i == 0)
        {
            for(j = frow / 2 * 2 - 1; j > 0; j -= 2)
            {
                printf("%s ",s[j].name);
            } 
            for(j = 0; j < frow; j += 2)
            {
                printf("%s",s[j].name);
                if(j + 2 >= frow)
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            count += n / k;
            for(j = row / 2 * 2 - 1; j > 0; j -= 2)
            {
                printf("%s ",s[count+j].name);
            }
            for(j = 0; j < row; j += 2)
            {
                printf("%s",s[count+j].name);
                if(j + 2 >= row)
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }
    

    return 0;
}