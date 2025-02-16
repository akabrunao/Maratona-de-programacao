#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *p = (int*)malloc((n+1) * sizeof(int));
    p[1] = 0;

    for(int i = 2; i <= n; i++){
        scanf("%d", &p[i]);
    }

    int *path = (int*)malloc((n+1) * sizeof(int));
    int idx = 0;
    int cur = n;
    while(cur != 0) {
        path[idx++] = cur;
        cur = p[cur];
    }

    for(int i = 0; i < idx / 2; i++){
        int temp = path[i];
        path[i] = path[idx - 1 - i];
        path[idx - 1 - i] = temp;
    }

    for(int i = 0; i < idx; i++){
        printf("%d ", path[i]);
    }
    printf("\n");

    free(p);
    free(path);
    return 0;
}
