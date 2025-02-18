#include <stdio.h>
#include <string.h>
int main(){
    char s[110];
    scanf("%s", s);
    int count = 1;
    int n = strlen(s);
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) count++;
        else count = 1;
        if(count >= 7){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
