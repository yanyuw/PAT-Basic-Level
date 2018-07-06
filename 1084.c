#include <stdio.h>
#include <string.h>
int main(){
    char d,s[100000] = {'0'};
    int N;
    scanf("%c %d", &d, &N);
    s[0] = d;
    for(int i = 1; i < N; i++){
        // printf("%s\n",s);
        int len = strlen(s);
        char tmp[100000] = {'0'};
        char c = s[0];
        int count = 1, index = 0;
        for(int j = 1; j < len; j++){
            if(s[j] == c){
                count++;
            } else {
                tmp[index++] = c;
                tmp[index++] = count + '0';
                c = s[j];
                count = 1;
            }
        }
        tmp[index++] = c;
        tmp[index++] = count + '0';
        strcpy(s, tmp);
    }
    printf("%s", s);
    return 0;
}