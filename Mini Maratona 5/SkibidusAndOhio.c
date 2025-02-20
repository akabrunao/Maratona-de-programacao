#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[105];
        scanf("%s", s);
        int n = strlen(s), flag = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]){
                flag = 1;
                break;
            }
        }
        printf("%d\n", flag ? 1 : n);
    }
    return 0;
}
