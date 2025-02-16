#include <stdio.h>
#include <stdlib.h>

#define MAX_F 1000000

int sd[MAX_F + 1];

void precompute_sd() {
    for (int x = 0; x <= MAX_F; x++) {
        int s = 0;
        int tmp = x;
        while (tmp > 0) {
            s += tmp % 10;
            tmp /= 10;
        }
        sd[x] = s;
    }
}

int count_geq(int *F, int N, int mid) {
    int total = 0;
    for (int i = 0; i < N; i++) {
        int current = F[i];
        int cnt = 0;
        while (current >= mid) {
            if (current == 0) break;
            cnt++;
            current -= sd[current];
        }
        total += cnt;
    }
    return total;
}

int find_kth(int *F, int N, int K, int max_f) {
    int low = 0, high = max_f;
    int result = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        int cnt = count_geq(F, N, mid);
        if (cnt >= K) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    precompute_sd();

    int N, K;
    scanf("%d %d", &N, &K);

    int *F = malloc(N * sizeof(int));
    int max_f = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &F[i]);
        if (F[i] > max_f) {
            max_f = F[i];
        }
    }

    // Compute T0
    int T0 = 0;
    for (int i = 0; i < N; i++) {
        int current = F[i];
        while (current > 0) {
            T0++;
            current -= sd[current];
        }
    }

    if (K > T0) {
        printf("0\n");
        free(F);
        return 0;
    }

    int v = find_kth(F, N, K, max_f);
    printf("%d\n", sd[v]);

    free(F);
    return 0;
}