#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(a>=b) printf("%lld\n", a);
        else{
            long long ans = 2*a - b;
            if(ans < 0) ans = 0;
            printf("%lld\n", ans);
        }
    }
    return 0;
}
