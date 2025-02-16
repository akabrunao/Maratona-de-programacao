#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n + 1];
        scanf("%s", s);

        int countB = 0;
        for(int i = 0; i < k; i++) {
            if(s[i] == 'B') {
                countB++;
            }
        }

        int maxB = countB;

        for(int i = k; i < n; i++) {
            if(s[i - k] == 'B') {
                countB--;
            }
            if(s[i] == 'B') {
                countB++;
            }
            if(countB > maxB) {
                maxB = countB;
            }
        }

        int resposta = k - maxB;
        printf("%d\n", resposta);
    }

    return 0;
}
