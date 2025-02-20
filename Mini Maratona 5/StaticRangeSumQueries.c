#include <stdio.h>
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    long long prefix[n+1];
    prefix[0]=0;
    int x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        prefix[i]=prefix[i-1]+x;
    }
    while(q--){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%lld\n", prefix[b]-prefix[a-1]);
    }
    return 0;
}
