#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int X, Y, K;
        scanf("%d %d %d", &X, &Y, &K);
        
        if (X >= K && Y >= K) {
            printf("0 0 %d 0\n", K);
            printf("0 0 0 %d\n", K);
        }

        else {
            int n = (X < Y) ? X : Y; 
            printf("0 0 %d %d\n", n, n);
            printf("%d 0 %d %d\n", X, X - n, n);
        }
    }
    return 0;
}
