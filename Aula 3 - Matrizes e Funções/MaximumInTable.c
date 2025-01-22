// https://codeforces.com/problemset/status?my=on

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numbers[10][10];

    for (int i = 0; i < n; i++) {
        numbers[i][0] = 1;
        numbers[0][i] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            numbers[i][j] = numbers[i-1][j] + numbers[i][j-1];
        }
    }

    printf("%d\n", numbers[n-1][n-1]);

    return 0;
}
