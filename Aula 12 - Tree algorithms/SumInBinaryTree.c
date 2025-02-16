#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        long long n;
        scanf("%lld", &n);

        long long sumPath = 0;
        while(n > 0){
            sumPath += n;
            n /= 2;
        }

        printf("%lld\n", sumPath);
    }

    return 0;
}
