#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
        if(p[i] != -1){
            p[i]--; 
        }
    }

    int maxDepth = 0;
    
    for(int i = 0; i < n; i++){
        int depth = 0;
        int cur = i;

        while(cur != -1){
            cur = p[cur];
            depth++;
        }
        if(depth > maxDepth){
            maxDepth = depth;
        }
    }

    printf("%d\n", maxDepth);

    return 0;
}
