#include <stdio.h>
#include <string.h>
int main(){
    char a[100005], b[100005];
    scanf("%s%s", a, b);
    if(strcmp(a,b)==0) printf("-1");
    else{
        int la = strlen(a), lb = strlen(b);
        printf("%d", la > lb ? la : lb);
    }
    return 0;
}
