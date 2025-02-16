#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &n);
        int a[n], odd_positions = 0, even_positions = 0;
        int odd_elements = 0, even_elements = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (i % 2 == 0) {
                if (a[i] % 2 != 0) even_positions++;
            } else {
                if (a[i] % 2 == 0) odd_positions++;
            }
        }
        
        if (odd_positions == even_positions) {
            printf("%d\n", odd_positions);
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
