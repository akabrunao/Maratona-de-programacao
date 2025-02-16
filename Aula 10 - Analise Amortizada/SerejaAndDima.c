#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cards[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }
    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    int turn = 0; 

    while (left <= right) {
        int current;
        if (cards[left] > cards[right]) {
            current = cards[left];
            left++;
        } else {
            current = cards[right];
            right--;
        }

        if (turn == 0) {
            sereja += current;
        } else {
            dima += current;
        }

        turn = 1 - turn;
    }

    printf("%d %d\n", sereja, dima);
    return 0;
}