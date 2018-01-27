#include <stdio.h>
#include <stdlib.h>

typedef struct test{
    int score;
    int right;
    int wrong[10];
} TEST;

int readanswer()
{
    char c;
    int count, answer = 0;
    scanf("%d", &count);
    for(int k = 0; k < count; k++){
        while((c = getchar()) == ' ');
        answer |= 1 << (c - 'a'); 
    }
    return answer;
}

int main()
{
    int n, m, max = 0,i,j,k,tmp;
    TEST t[100];
    
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++){
        scanf("%d %d", &t[i].score, &tmp);
        t[i].right = readanswer();
        for(j = 0; j < 5; j++){
            t[i].wrong[j] = 0;
        }
    }
    for(i = 0; i < n; i++){
        double grade = 0;
        int answer;
        for(j = 0; j < m; j++){
            while(getchar() != '(');
            answer = readanswer();
            int result = answer ^ t[j].right;
            if(result == 0){ 
                grade += t[j].score;
            }
            else if( (result | t[j].right) == t[j].right){
                grade += 0.5 * t[j].score;
            }
            for(k = 0; k < 5; k++){
                t[j].wrong[k] += result >> k & 1; // 结果要么0（答案正确） 要么1（答案错误）
                if(t[j].wrong[k] > max){
                    max = t[j].wrong[k];
                }
            }
            while(getchar() != ')');
        }
        printf("%.1f\n", grade);
    }
    
    if(max == 0){
        printf("Too simple");
    } 
    else{
        for(i = 0; i < m; i++){
            for(j = 0; j < 5; j++){
                if(t[i].wrong[j] == max){
                    printf("%d %d-%c\n",max, i + 1, j + 'a');
                }
            }
        } 
    }
    
    return 0;
}
