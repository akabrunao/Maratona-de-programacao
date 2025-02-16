#include <stdio.h>

int original[50][50];
int n;

// Função para verificar se a matriz é válida (linhas e colunas crescentes)
int is_valid(int mat[][50]) {
    // Verifica linhas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mat[i][j] >= mat[i][j+1]) return 0;
        }
    }
    // Verifica colunas
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (mat[i][j] >= mat[i+1][j]) return 0;
        }
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &original[i][j]);
        }
    }

    // Testa todas as rotações possíveis (0 a 3)
    for (int r = 0; r < 4; r++) {
        int rotated[50][50];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                switch(r) {
                    case 0: // Sem rotação
                        rotated[i][j] = original[i][j];
                        break;
                    case 1: // Rotação 90° anti-horário
                        rotated[i][j] = original[j][n-1 - i];
                        break;
                    case 2: // Rotação 180°
                        rotated[i][j] = original[n-1 - i][n-1 - j];
                        break;
                    case 3: // Rotação 270° anti-horário
                        rotated[i][j] = original[n-1 - j][i];
                        break;
                }
            }
        }
        if (is_valid(rotated)) {
            printf("%d\n", r);
            return 0;
        }
    }
    return 0;
}
