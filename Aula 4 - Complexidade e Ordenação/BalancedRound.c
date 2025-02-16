#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenação
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int problemas[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &problemas[i]);
        }
        
        // Ordena os problemas por dificuldade
        qsort(problemas, n, sizeof(int), comparar);
        
        int max_sequencia = 1;
        int sequencia_atual = 1;
        
        // Encontra a maior sequência válida
        for (int i = 1; i < n; i++) {
            if (problemas[i] - problemas[i-1] <= k) {
                sequencia_atual++;
                if (sequencia_atual > max_sequencia) {
                    max_sequencia = sequencia_atual;
                }
            } else {
                sequencia_atual = 1;
            }
        }
        
        // Calcula o número mínimo de remoções
        printf("%d\n", n - max_sequencia);
    }
    
    return 0;
}
