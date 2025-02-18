#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), compare);
        
        // Deduplicate
        int m = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i-1]) {
                a[m++] = a[i];
            }
        }
        
        // Prepend 0
        int *s = (int *)malloc((m + 1) * sizeof(int));
        s[0] = 0;
        for (int i = 0; i < m; i++) {
            s[i+1] = a[i];
        }
        m++;
        free(a);
        
        int found = 0;
        for (int i = 1; i < m; i++) {
            int d = s[i] - s[i-1];
            if (d > 1) {
                int steps_prev = i - 1;
                if (steps_prev % 2 == 0) {
                    printf("Alice\n");
                } else {
                    printf("Bob\n");
                }
                found = 1;
                break;
            }
        }
        if (!found) {
            int total = s[m-1];
            if (total % 2 == 1) {
                printf("Alice\n");
            } else {
                printf("Bob\n");
            }
        }
        free(s);
    }
    return 0;
}