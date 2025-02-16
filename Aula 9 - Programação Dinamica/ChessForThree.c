#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int p1, p2, p3;
        scanf("%d %d %d", &p1, &p2, &p3);

        int sum = p1 + p2 + p3;
        if(sum % 2 != 0){
            printf("-1\n");
            continue;
        }

        int maxDraws = -1;  

        for(int d1 = 0; d1 <= p1; d1++){
            if((p1 - d1) % 2 != 0) continue; 

            for(int d2 = 0; d2 <= p2; d2++){
                if((p2 - d2) % 2 != 0) continue;

                for(int d3 = 0; d3 <= p3; d3++){
                    if((p3 - d3) % 2 != 0) continue;

                    if(d1 + d2 < d3) continue;
                    if(d2 + d3 < d1) continue;
                    if(d1 + d3 < d2) continue;

                    int sumD = d1 + d2 + d3;
                    if(sumD > maxDraws){
                        maxDraws = sumD;
                    }
                }
            }
        }

        if(maxDraws < 0){
            printf("-1\n");
        } else {
            printf("%d\n", maxDraws / 2);
        }
    }

    return 0;
}
