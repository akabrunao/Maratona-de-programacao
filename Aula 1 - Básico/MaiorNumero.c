//https://neps.academy/br/exercise/323
#include <stdio.h>

int main() {
    int num, maior = 0;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > maior) {
            maior = num; 
        }
    }

    printf("%d\n", maior); 

    return 0;
}
