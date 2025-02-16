#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int k, q;
        scanf("%d %d", &k, &q);

        int a[k];
        for (int i = 0; i < k; i++) {
            scanf("%d", &a[i]);
        }

        int n[q];
        for (int i = 0; i < q; i++) {
            scanf("%d", &n[i]);
        }

        for (int i = 0; i < q; i++) {
            int players = n[i];
            int gameOver = 0;

            while (!gameOver) {
                gameOver = 1;
                int removed[players];
                for (int j = 0; j < players; j++) {
                    removed[j] = 0;
                }

                for (int j = 0; j < k; j++) {
                    if (a[j] <= players && !removed[a[j] - 1]) {
                        removed[a[j] - 1] = 1;
                        gameOver = 0;
                    }
                }

                int newPlayers = 0;
                for (int j = 0; j < players; j++) {
                    if (!removed[j]) {
                        newPlayers++;
                    }
                }
                players = newPlayers;
            }

            printf("%d ", players);
        }
        printf("\n");
    }
    return 0;
}
