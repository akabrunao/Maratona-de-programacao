//https://neps.academy/br/exercise/84
#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B;
	scanf("%d %d",&A, &B);

    if (A == 0) {
        printf("C");
    } else if (B == 0) {
        printf("B");
    } else {
        printf("A");
    }
    return 0;
}