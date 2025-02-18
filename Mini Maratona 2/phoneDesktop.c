#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        int screens = 0;
        int base_screens = y / 2;

        int leftover_x = x - 7 * base_screens;
        if (leftover_x < 0) leftover_x = 0;

        int leftover_y = y % 2;
        int leftover_y_screens = leftover_y;
        
        int leftover_x_2 = leftover_x;
        if (leftover_y == 1) {
            leftover_x_2 = leftover_x - 11;
            if (leftover_x_2 < 0) leftover_x_2 = 0;
        }
        
        int x_screens = (leftover_x_2 + 14) / 15;
        
        screens = base_screens + leftover_y_screens + x_screens;
        
        printf("%d\n", screens);
    }
    return 0;
}
