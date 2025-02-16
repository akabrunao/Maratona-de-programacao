#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000

static long long counts[MAX+1];
static int sod[MAX+1];       // soma de dígitos
static int nextVal[MAX+1];   // x -> x - somaDeDigitos(x)

// Pré-calcula soma de dígitos e nextVal para todos x em [0..MAX]
void precompute() {
    for(int x = 0; x <= MAX; x++){
        int tmp = x, sum = 0;
        while(tmp > 0){
            sum += (tmp % 10);
            tmp /= 10;
        }
        sod[x] = sum;
        nextVal[x] = x - sum;  // next(x) = x - SOD(x)
    }
}

int main(){
    // Leitura de N e K
    int N;
    long long K;  // K pode chegar a 1e9
    scanf("%d %lld", &N, &K);

    // Zera contagens
    for(int i = 0; i <= MAX; i++){
        counts[i] = 0;
    }

    // Lê as flores e contabiliza
    int x;
    int maxFlower = 0; // Para sabermos até onde precisamos ir
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        counts[x]++;
        if(x > maxFlower) {
            maxFlower = x;
        }
    }

    // Pré-cálculo
    precompute();

    long long soFar = 0; // Quantas abelhas já coletaram
    int largest = maxFlower;

    // Percorre do maior valor até 0
    while(largest >= 0){
        // Se não há flores com esta quantidade, desce
        if(counts[largest] == 0){
            largest--;
            continue;
        }

        long long c = counts[largest];
        // Se podemos usar todas essas c flores e ainda não chegar na abelha K
        if(soFar + c < K){
            // Todas as c flores serão coletadas agora
            counts[largest] = 0;
            // Elas vão para nextVal[largest]
            int nxt = nextVal[largest];
            counts[nxt] += c;

            // Avança c abelhas
            soFar += c;
        } else {
            // A abelha K está dentro deste grupo
            // Então a K-ésima abelha coleta sumOfDigits(largest)
            // e terminamos
            int answer = sod[largest];
            printf("%d\n", answer);
            return 0;
        }
    }

    // Se chegamos aqui e não retornamos, significa que soFar < K
    // mas largest ficou < 0 => todas flores estão em 0
    // Logo a abelha K coleta 0
    printf("0\n");
    return 0;
}
