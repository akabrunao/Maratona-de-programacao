#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    long long total = (long long)n*(n+1)/2;
    if(total & 1){
        printf("NO");
        return 0;
    }
    long long target = total / 2;
    int *inSet1 = malloc((n+1)*sizeof(int));
    for(int i = 1; i <= n; i++) inSet1[i] = 0;
    for(int i = n; i >= 1; i--){
        if(target >= i){
            inSet1[i] = 1;
            target -= i;
        }
    }
    printf("YES\n");
    int cnt1 = 0;
    for(int i = 1; i <= n; i++){
        if(inSet1[i]) cnt1++;
    }
    printf("%d\n", cnt1);
    for(int i = 1; i <= n; i++){
        if(inSet1[i]) printf("%d ", i);
    }
    printf("\n");
    int cnt2 = n - cnt1;
    printf("%d\n", cnt2);
    for(int i = 1; i <= n; i++){
        if(!inSet1[i]) printf("%d ", i);
    }
    free(inSet1);
    return 0;
}
