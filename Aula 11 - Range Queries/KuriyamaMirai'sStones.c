#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    int *u = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        u[i] = v[i];
    }
    qsort(u, n, sizeof(int), compare);

    long long *prefix_v = malloc((n + 1) * sizeof(long long));
    long long *prefix_u = malloc((n + 1) * sizeof(long long));
    prefix_v[0] = 0;
    prefix_u[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix_v[i] = prefix_v[i - 1] + v[i - 1];
        prefix_u[i] = prefix_u[i - 1] + u[i - 1];
    }

    int m;
    scanf("%d", &m);
    while (m--) {
        int type, l, r;
        scanf("%d %d %d", &type, &l, &r);
        long long sum;
        if (type == 1) {
            sum = prefix_v[r] - prefix_v[l - 1];
        } else {
            sum = prefix_u[r] - prefix_u[l - 1];
        }
        printf("%lld\n", sum);
    }

    free(v);
    free(u);
    free(prefix_v);
    free(prefix_u);
    return 0;
}