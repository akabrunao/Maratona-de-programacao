#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int ans = 0;
        for(int x=0; x<=5; x++){
            for(int y=0; y<=5; y++){
                for(int z=0; z<=5; z++){
                    if(x+y+z <= 5){
                        int prod = (a+x)*(b+y)*(c+z);
                        if(prod > ans) ans = prod;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
