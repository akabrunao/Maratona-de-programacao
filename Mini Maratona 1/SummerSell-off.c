#include <stdio.h>
#include <stdlib.h>
long long min_ll(long long a,long long b){return a<b?a:b;}
int cmp(const void *a,const void *b){
    long long aa = *(long long*)a, bb = *(long long*)b;
    if(aa<bb)return 1;
    if(aa>bb)return -1;
    return 0;
}
int main(){
    int n,f;
    scanf("%d %d",&n,&f);
    long long total=0;
    long long *extra = malloc(n*sizeof(long long));
    for(int i=0;i<n;i++){
        long long k,l;
        scanf("%lld %lld",&k,&l);
        long long base = min_ll(k,l);
        total += base;
        long long dbl = min_ll(2*k,l);
        extra[i] = dbl - base;
    }
    qsort(extra,n,sizeof(long long),cmp);
    for(int i=0;i<f;i++){
        total += extra[i];
    }
    printf("%lld",total);
    free(extra);
    return 0;
}
