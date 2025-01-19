//https://neps.academy/br/exercise/52
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int lampadaA = 0, lampadaB = 0;
    int operacao;

    for (int i = 0; i < N; i++) {
        scanf("%d", &operacao);

        if (operacao == 1) {
            lampadaA = 1 - lampadaA;
        } else if (operacao == 2) {
            lampadaA = 1 - lampadaA;
            lampadaB = 1 - lampadaB;
        }
    }

    printf("%d\n", lampadaA);
    printf("%d\n", lampadaB);

    return 0;
}