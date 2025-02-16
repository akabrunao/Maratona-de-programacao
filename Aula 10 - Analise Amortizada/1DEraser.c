#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        char s[n + 1];
        scanf("%s", s);
        int count = 0;
        int current_pos = 0;
        while (current_pos < n) {
            if (s[current_pos] == 'B') {
                count++;
                current_pos += k;
            } else {
                current_pos++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}