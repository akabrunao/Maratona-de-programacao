#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[51];
        scanf("%s", s);
        int dp[51];
        for (int i = 0; i < n; i++) {
            dp[i] = -1;
        }
        dp[0] = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] == -1) continue;
            for (int step = 1; step <= 2; step++) {
                int j = i + step;
                if (j >= n) continue;
                if (s[j] == '*') continue;
                int coins = dp[i] + (s[j] == '@' ? 1 : 0);
                if (coins > dp[j]) {
                    dp[j] = coins;
                }
            }
        }
        int max_coins = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] > max_coins) {
                max_coins = dp[i];
            }
        }
        printf("%d\n", max_coins);
    }
    return 0;
}
