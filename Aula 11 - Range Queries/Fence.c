#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int h[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += h[i];
    }

    int min_sum = current_sum;
    int min_index = 0;

    for (int i = 1; i <= n - k; i++) {
        current_sum = current_sum - h[i - 1] + h[i + k - 1];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i;
        }
    }

    printf("%d\n", min_index + 1);
    return 0;
}