#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x = 0, i = 1;
        while(1){
            int move = 2*i - 1;
            if(i % 2 == 1) { // Sakurako (odd move): negative direction
                x -= move;
                if(x < -n) {
                    printf("Sakurako\n");
                    break;
                }
            } else { // Kosuke (even move): positive direction
                x += move;
                if(x > n) {
                    printf("Kosuke\n");
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}
