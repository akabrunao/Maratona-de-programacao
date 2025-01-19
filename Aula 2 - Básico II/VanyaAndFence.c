//https://codeforces.com/contest/677/problem/A
#include <stdio.h>

int main() {
    int n, h, i, width = 0;

    scanf("%d %d", &n, &h);

    int heights[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    for (i = 0; i < n; i++) {
        if (heights[i] <= h) {
            width += 1;
        } else {
            width += 2;
        }
    }

    printf("%d\n", width);

    return 0;
}