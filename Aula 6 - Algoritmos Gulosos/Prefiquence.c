#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        char a[n + 1], b[m + 1];
        scanf("%s %s", a, b);
        
        int i = 0, j = 0;
        
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
            }
            j++;
        }
        
        printf("%d\n", i);
    }
    
    return 0;
}
