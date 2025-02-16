#include <stdio.h>

int main() {
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    
    int colors[4] = {s1, s2, s3, s4};
    int unique_count = 4; 

    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (colors[i] == colors[j]) {
                unique_count--; 
                break; 
            }
        }
    }

    
    printf("%d\n", 4 - unique_count);

    return 0;
}
