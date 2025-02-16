#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1001];
        scanf("%s", s);
        int n = strlen(s);
        int prefix0[n+1], prefix1[n+1];
        prefix0[0] = 0;
        prefix1[0] = 0;
        for (int i = 0; i < n; ++i) {
            prefix0[i+1] = prefix0[i] + (s[i] == '0');
            prefix1[i+1] = prefix1[i] + (s[i] == '1');
        }
        int total0 = prefix0[n];
        int total1 = prefix1[n];
        int min_flips = (total0 < total1) ? total0 : total1;

        for (int i = 0; i <= n; ++i) {
            int cost0to1 = prefix1[i] + (total0 - prefix0[i]);

            int cost1to0 = prefix0[i] + (total1 - prefix1[i]);
            if (cost0to1 < min_flips) min_flips = cost0to1;
            if (cost1to0 < min_flips) min_flips = cost1to0;
        }
        printf("%d\n", min_flips);
    }
    return 0;
}