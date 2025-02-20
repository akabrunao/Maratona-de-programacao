#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long total = (long long)n*(n+1)/2;
    for(int i = 0; i < n-1; i++){
        int x;
        scanf("%d", &x);
        total -= x;
    }
    printf("%lld", total);
    return 0;
}
