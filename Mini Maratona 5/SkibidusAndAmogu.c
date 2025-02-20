#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[15];
        scanf("%s", s);
        int len = strlen(s);
        s[len-2] = '\0';
        printf("%si\n", s);
    }
    return 0;
}
