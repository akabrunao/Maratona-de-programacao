#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int totalPoints = 0;
        for(int i=0; i<10; i++){
            char row[11];
            scanf("%s", row);
            for(int j=0; j<10; j++){
                if(row[j] == 'X'){
                    int distBorder = i;
                    if(9 - i < distBorder) distBorder = 9 - i;
                    if(j < distBorder) distBorder = j;
                    if(9 - j < distBorder) distBorder = 9 - j;
                    totalPoints += (distBorder + 1);
                }
            }
        }
        printf("%d\n", totalPoints);
    }
    return 0;
}
