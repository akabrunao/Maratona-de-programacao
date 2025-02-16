#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);  
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        
        qsort(a, n, sizeof(int), compare);
        
        
        while (n > 1) {
            int new_val = (a[n - 1] + a[n - 2]) / 2;  
            n--;  
            a[n - 1] = new_val;  
            qsort(a, n, sizeof(int), compare);  
        }
        
        
        printf("%d\n", a[0]);
    }
    
    return 0;
}
