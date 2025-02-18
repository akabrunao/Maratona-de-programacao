#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        long long a1, b;
        scanf("%lld %lld", &a1, &b);

        long long sumAll = 0; 
        long long maxVal = 0; 
        for(int i = 0; i < b; i++){
            long long val;
            scanf("%lld", &val);
            sumAll += val;
            if(val > maxVal) {
                maxVal = val;
            }
        }
        
        long long result = 2 * (sumAll - maxVal) - (b - 1);
        printf("%lld\n", result);
    }

    return 0;
}
