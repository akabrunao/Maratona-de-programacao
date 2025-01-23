//https://codeforces.com/problemset/problem/339/A

#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    scanf("%s", input);

    int count[4] = {0}; 

    
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '1') count[1]++;
        else if (input[i] == '2') count[2]++;
        else if (input[i] == '3') count[3]++;
    }

    
    int first = 1; 
    for (int num = 1; num <= 3; num++) {
        for (int i = 0; i < count[num]; i++) {
            if (!first) {
                printf("+");
            }
            printf("%d", num);
            first = 0;
        }
    }

    printf("\n");

    return 0;
}
