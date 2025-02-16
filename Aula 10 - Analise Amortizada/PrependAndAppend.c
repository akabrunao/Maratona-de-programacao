#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[2001];
        scanf("%s", s);
        int left = 0, right = n - 1;
        while (left <= right && s[left] != s[right]) {
            left++;
            right--;
        }
        printf("%d\n", right - left + 1);
    }
    return 0;
}