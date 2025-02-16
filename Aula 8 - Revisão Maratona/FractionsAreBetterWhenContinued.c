#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a = 1, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    
    printf("%d\n", b);
    return 0;
}