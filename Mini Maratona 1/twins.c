#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[110], total = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    qsort(arr, n, sizeof(int), cmp);
    int sum = 0, count = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        count++;
        if(sum > total - sum) break;
    }
    printf("%d", count);
    return 0;
}
