#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; ++i) {
            int num;
            scanf("%d", &num);
            if (num % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        if (even == 0 || odd == 0) {
            printf("0\n");
        } else {
            printf("%d\n", even);
        }
    }
    return 0;
}