// https://codeforces.com/problemset/problem/1933/A

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int array[50];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
            sum += abs(array[i]);
        }

        printf("%d\n", sum);
    }

    return 0;
}
