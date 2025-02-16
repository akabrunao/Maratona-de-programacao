#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int sushi[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &sushi[i]);
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int max_length = 0;
    int prev_count = 0;
    int prev_type = -1;
    int current_type = sushi[0];
    int current_count = 1;

    for (int i = 1; i < n; i++) {
        if (sushi[i] == current_type) {
            current_count++;
        } else {
            if (prev_type != -1) {
                int length = 2 * min(prev_count, current_count);
                if (length > max_length) {
                    max_length = length;
                }
            }
            prev_type = current_type;
            prev_count = current_count;
            current_type = sushi[i];
            current_count = 1;
        }
    }

    // Verificar o último par de blocos
    if (prev_type != -1) {
        int length = 2 * min(prev_count, current_count);
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("%d\n", max_length);

    return 0;
}
