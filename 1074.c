// 测试点1 3

#include<stdio.h>
#include<string.h>
int main()
{
    int lent,lena,lenb,i = 0,j;
    char table[21] = {'0'},a[21] = {'0'},b[21] = {'0'},c[21] = {'0'};
    scanf("%s",table);
    scanf("%s%s",a,b);
    
    lent = strlen(table);
    lena = strlen(a);
    lenb = strlen(b);
    int n = 0;
    int flag = 0;
    while(lena != 0 && lenb != 0){
        char tmp = a[lena-1] + b[lenb-1] - '0';
        // printf("tmp=%c\n",tmp);
        if(table[lent-1] == '0'){
            flag = 10;
        }
        else{
            flag = 0;
        }
        // printf("%d\n",table[lent-1]+flag -'0');
        c[i++] = (tmp - '0' + n) % (table[lent-1] + flag - '0') + '0';
        // printf("c=%c\n",c[i-1]);
        n = (tmp - '0' + n ) / (table[lent-1] + flag - '0');
        lena--;
        lenb--;
        lent--;
    }
    if(lena > lenb){
        while(lena--){
            if(table[lent-1] == '0'){
                flag = 10;
            }
            else{
                flag = 0;
            }
            // printf("n=%d",n);
            // printf("%d",a[lena] - '0' + n);
            c[i++] = (a[lena] - '0' + n) % (table[lent-1] + flag - '0') + '0';
            n = (a[lena] + n - '0') / (table[lent-1] + flag - '0');
            // printf("c=%c\n",c[i-1]);
            lent--;
        }
    }
    else
    {
        while(lenb--){
            if(table[lent-1] == '0'){
                flag = 10;
            }
            else{
                flag = 0;
            }
            c[i++] = (a[lenb] - '0' + n) % (table[lent-1] + flag - '0') + '0';
            n = (a[lenb] + n - '0') / (table[lent-1] + flag - '0');
            lent--;
        }
    }
    // printf("%d\n",n);
    if(n != 0){
        c[i++] = n + '0';
    }//进位
    // printf("c=%s\ni=%d",c,i);
    while(c[i-1] == '0'){
        i--;
    }
    // printf("i=%d",i);
    for(j = i-1; j >= 0; j--){
        printf("%c",c[j]);
    }
    if(i == 0){
        printf("0");
    }//结果等于0时
    printf("\n");
    return 0;
}