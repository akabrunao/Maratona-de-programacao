#include <stdio.h>
#include <limits.h>

#define ll long long

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        ll a[n];
        int has_odd = 0, has_even = 0;
        ll min_odd = LLONG_MAX;
        for (int i = 0; i < n; ++i) {
            scanf("%lld", &a[i]);
            if (a[i] % 2 == 0) {
                has_even = 1;
            } else {
                has_odd = 1;
                if (a[i] < min_odd) {
                    min_odd = a[i];
                }
            }
        }
        if (!has_even || !has_odd) {
            printf("0\n");
            continue;
        }
        int total_operations = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) {
                int ops = 0;
                ll s = min_odd;
                while (s <= a[i]) {
                    s += s;
                    ops++;
                }
                total_operations += ops + 1;
            }
        }
        printf("%d\n", total_operations);
    }
    return 0;
}
