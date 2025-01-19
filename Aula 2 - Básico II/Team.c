//https://codeforces.com/contest/231/problem/A
#include <stdio.h>

int main() {
    int n, i, count = 0;
    int petya, vasya, tonya;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d %d %d", &petya, &vasya, &tonya);


        if (petya + vasya + tonya >= 2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}