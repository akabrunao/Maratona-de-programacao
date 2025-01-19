//https://codeforces.com/contest/266/problem/A
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, count = 0;
    char stones[51];

    scanf("%d\n", &n);
    scanf("%s", stones);

    for (i = 1; i < n; i++) {
        if (stones[i] == stones[i-1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}