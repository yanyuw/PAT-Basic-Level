#include <stdio.h>
#include <string.h>
#include <ctype.h>
//运行超时
struct school{
    char id[10];
    int score;
    int person;
}sc[100000] = {{"0", 0, 0}};//结构体数组初始化

int grade(char a[10], int g){
    if(a[0] == 'B'){
        return g/1.5;
    } else if (a[0] == 'A'){
        return g;
    } else {
        return g*1.5;
    }
}
//字符串转换成小写
void str_tolower(char s[])
{
    int i = 0;
    while (s[i])
    {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int count = 0;//单位个数
    
    //输入并分单位统计分数 注意大小写无关
    for(int i = 0; i < N; i++){
        char id[10];
        int g;
        char s[10];
        scanf("%s %d %s", id, &g, s);
        str_tolower(s);
        if(i == 0){
            strcpy(sc[0].id,s);
            sc[0].score += grade(id, g);
            sc[0].person++;
            count++;
        }else{
            int flag = 1;
            for(int j = 0; j < count; j++){
                if(strcmp(s,sc[j].id) == 0){
                    sc[j].score += grade(id, g);
                    sc[j].person++;
                    flag = 0;
                }
            }
            if(flag){
                strcpy(sc[count].id, s);
                sc[count].score += grade(id, g);
                sc[count].person++;
                count++;
            }
        }
    }

    //排序
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){
            int flag = 0;
            if(sc[j].score < sc[j+1].score){
                flag = 1;
            } else if( sc[j].score == sc[j+1].score){
                if(sc[j].person > sc[j+1].person){
                    flag = 1;
                } else if(sc[j].person == sc[j+1].person && strcmp(sc[j].id, sc[j+1].id) > 0){
                    flag = 1;
                }
                
            }
            if(flag){
                struct school tmp;
                tmp = sc[j];
                sc[j] = sc[j+1];
                sc[j+1] = tmp;
            }
        }
    }
    //输出
    printf("%d\n", count);
    for(int i = 0; i < count; i++){
        if(i != 0 && sc[i].score == sc[i-1].score){
            printf("%d ", i);
        }else{
            printf("%d ", i+1);
        }
        printf("%s %d %d\n", sc[i].id, sc[i].score, sc[i].person);
    }
}