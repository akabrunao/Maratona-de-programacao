// https://codeforces.com/contest/263/problem/A
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int x = 0, y = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    int moves = abs(x - 2) + abs(y - 2);

    printf("%d\n", moves);

    return 0;
}
