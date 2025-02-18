#include <stdio.h>
 
int main() {
    int t, n, m;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d %d", &n, &m);
        
        if (m <= n && (n - m) % 2 == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}