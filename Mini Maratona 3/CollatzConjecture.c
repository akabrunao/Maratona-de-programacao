#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x, y, k;
        scanf("%lld %lld %lld", &x, &y, &k);
        k--;
        x++;
        while (1) {
            long long need = y * (x / y + (x % y == 0 ? 0 : 1)) - x;
            if (need > k) {
                printf("%lld\n", x + k);
                break;
            } else if (x <= y) {
                int first = y - x;
                k -= first;
                x = 1;
                k %= (y - 1);
                x += k;
                if (x % y == 0 && x != 0) {
                    while (x % y == 0) x /= y;
                }
                printf("%lld\n", x);
                break;
            } else {
                x += need;
                k -= need;
                while (x % y == 0) x /= y;
            }
        }
    }
    return 0;
}