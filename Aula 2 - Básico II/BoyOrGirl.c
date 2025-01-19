//https://codeforces.com/contest/236/problem/A
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char username[101];
    scanf("%s", username); 

    bool distinct[26] = {false}; 
    int distinctCount = 0;

    
    for (int i = 0; i < strlen(username); i++) {
        int index = username[i] - 'a'; 
        if (!distinct[index]) {
            distinct[index] = true;
            distinctCount++;
        }
    }

    
    if (distinctCount % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
