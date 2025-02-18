#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int pos[100001];
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        pos[x]=i;
    }
    int m;
    scanf("%d",&m);
    long long vasya=0, petya=0;
    for(int i=0;i<m;i++){
        int b;
        scanf("%d",&b);
        vasya+=pos[b];
        petya+=n-pos[b]+1;
    }
    printf("%lld %lld",vasya,petya);
    return 0;
}
