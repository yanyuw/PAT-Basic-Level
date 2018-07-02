#include<stdio.h>
#include<string.h>

int main(){
    int N;
    char pw[100][100];
    scanf("%d", &N);
    char tmp[10];
    fgets(tmp,10,stdin);
    for(int i = 0; i < N; i++){
        fgets(pw[i], 100, stdin);
        // printf("%s",pw[i]);
    }
    for(int i = 0; i < N; i++){
        int len = strlen(pw[i]) - 1;
        if(len < 6){
            printf("Your password is tai duan le.\n");
            continue;
        }
        int letter = 0, num = 0, flag = 1;
        for(int j = 0; j < len; j++){
            if((pw[i][j] >= 'A' && pw[i][j] <= 'Z') || (pw[i][j] >= 'a' && pw[i][j] <= 'z')){
                letter++;
            } else if (pw[i][j] >= '0' && pw[i][j] <= '9'){
                num++;
            } else if (pw[i][j] != '.'){
                printf("Your password is tai luan le.\n");
                flag = 0;
                break;
            }
        }
        if(flag){
            if(letter > 0 && num > 0){
                printf("Your password is wan mei.\n");
            } else if (letter > 0){
                printf("Your password needs shu zi.\n");
            } else {
                printf("Your password needs zi mu.\n");
            }
        }
    }
    return 0;
}