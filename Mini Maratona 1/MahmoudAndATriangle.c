#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int n;
    scanf("%d",&n);
    int *a = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), cmp);
    for(int i = 0; i < n - 2; i++){
        if(a[i] + a[i+1] > a[i+2]){
            printf("YES");
            free(a);
            return 0;
        }
    }
    printf("NO");
    free(a);
    return 0;
}
