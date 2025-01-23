#include <stdio.h>
#include <stdlib.h>

//
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int size = 2 * n;
        int a[size];

        
        for (int i = 0; i < size; i++) {
            scanf("%d", &a[i]);
        }

        
        qsort(a, size, sizeof(int), compare);

        
        int score = 0;
        for (int i = 0; i < size; i += 2) {
            score += a[i]; 
        }

        
        printf("%d\n", score);
    }

    return 0;
}
