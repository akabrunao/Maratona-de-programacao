#include <stdio.h>
#include <stdlib.h>

#define ll long long

int cmp_desc(const void *a, const void *b) {
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    if(x < y) return 1;
    if(x > y) return -1;
    return 0;
}

int main(){
    int n, q;
    scanf("%d %d", &n, &q);

    ll *A = (ll*)malloc(n * sizeof(ll));
    for(int i = 0; i < n; i++){
        scanf("%lld", &A[i]);
    }

    ll *freq = (ll*)calloc(n+1, sizeof(ll));

    for(int i = 0; i < q; i++){
        int l, r;
        scanf("%d %d", &l, &r);
        freq[l-1] += 1;  
        if(r < n){
            freq[r] -= 1; 
        }
    }

    for(int i = 1; i < n; i++){
        freq[i] += freq[i-1];
    }

    qsort(A, n, sizeof(ll), cmp_desc);
    qsort(freq, n, sizeof(ll), cmp_desc);

    ll answer = 0;
    for(int i = 0; i < n; i++){
        answer += A[i] * freq[i];
    }

    printf("%lld\n", answer);

    free(A);
    free(freq);
    return 0;
}
