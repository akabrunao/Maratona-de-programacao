#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int p1, p2, p3;
        scanf("%d %d %d", &p1, &p2, &p3);
        
        // Sum of points
        int sum_p = p1 + p2 + p3;
        
        // Check if sum of points is even, it's necessary for results from real games
        if (sum_p % 2 != 0) {
            printf("-1\n");
            continue;
        }
        
        // Check if scores can form a consistent game history
        // max draws are at least 2*(p1) (for non-increasing scores)
        int max_possible_games = (p3 - p2) + (p3 - p1);
        if (p2 - p1 <= max_possible_games) {
            printf("%d\n", sum_p / 2 - p3);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
