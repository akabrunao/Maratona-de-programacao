#include <stdio.h>

int main() {
    int k, r;
    scanf("%d %d", &k, &r);

    for (int i = 1; ; i++) {
        int total = k * i;
        if (total % 10 == 0 || total % 10 == r) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
