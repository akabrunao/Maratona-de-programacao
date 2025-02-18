#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXM 1000000
#define MAXN 26
#define MAXK 26

static int nextPos[MAXM+1][MAXK];
static bool dp[MAXN+1][MAXM+1];
static char s[MAXM+1];

void buildMissing(int p, int i, int n, int k, char *res) {
    if (i == n) {
        res[n] = '\0';
        return;
    }

    for (int c = 0; c < k; c++) {
        int nxt = nextPos[p][c];
    
        if (nxt == -1) {
            res[i] = (char)('a' + c);

            for (int r = i+1; r < n; r++) {
                res[r] = 'a'; 
            }
            res[n] = '\0';
            return;
        }
    
        if (!dp[i+1][nxt+1]) {
            res[i] = (char)('a' + c);
            buildMissing(nxt+1, i+1, n, k, res);
            return;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k, m;
        scanf("%d %d %d", &n, &k, &m);
        scanf("%s", s);

        for (int c = 0; c < k; c++) {
            nextPos[m][c] = -1;
        }
    
        for (int p = m - 1; p >= 0; p--) {
        
            for (int c = 0; c < k; c++) {
                nextPos[p][c] = nextPos[p+1][c];
            }
        
            int letra = s[p] - 'a'; 
            nextPos[p][letra] = p;
        }

    
        for (int p = 0; p <= m; p++) {
            dp[n][p] = true;
        }
    
        for (int i = n - 1; i >= 0; i--) {
            for (int p = m; p >= 0; p--) {
                bool allGood = true;

                for (int c = 0; c < k; c++) {
                    int nxt = nextPos[p][c];
                    if (nxt == -1 || !dp[i+1][nxt+1]) {
                        allGood = false;
                        break;
                    }
                }
                dp[i][p] = allGood;
            }
        }

        if (dp[0][0]) {
            printf("YES\n");
        } else {
            printf("NO\n");
            char resposta[40];
            buildMissing(0, 0, n, k, resposta);
            printf("%s\n", resposta);
        }
    }

    return 0;
}
