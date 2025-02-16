#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[100];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int min_val = a[0], max_val = a[0];
        int min_pos = 0, max_pos = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < min_val) {
                min_val = a[i];
                min_pos = i;
            }
            if (a[i] > max_val) {
                max_val = a[i];
                max_pos = i;
            }
        }
        int left = (min_pos < max_pos) ? min_pos : max_pos;
        int right = (min_pos > max_pos) ? min_pos : max_pos;
        int option1 = right + 1;
        int option2 = n - left;
        int option3 = (left + 1) + (n - right);
        int ans = option1;
        if (option2 < ans) ans = option2;
        if (option3 < ans) ans = option3;
        printf("%d\n", ans);
    }
    return 0;
}
