//https://codeforces.com/problemset/problem/282/A

#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);

    char operation[4];

    for (int i = 0; i < n; i++) {
        scanf("%s", operation);

        if (strstr(operation, "++")) {
            x++;
        } else if (strstr(operation, "--")) {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}
