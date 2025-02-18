#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000

static long long counts[MAX+1];
static int sod[MAX+1];      
static int nextVal[MAX+1];  

void precompute() {
    for(int x = 0; x <= MAX; x++){
        int tmp = x, sum = 0;
        while(tmp > 0){
            sum += (tmp % 10);
            tmp /= 10;
        }
        sod[x] = sum;
        nextVal[x] = x - sum; 
    }
}

int main(){

    int N;
    long long K; 
    scanf("%d %lld", &N, &K);


    for(int i = 0; i <= MAX; i++){
        counts[i] = 0;
    }


    int x;
    int maxFlower = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        counts[x]++;
        if(x > maxFlower) {
            maxFlower = x;
        }
    }


    precompute();

    long long soFar = 0;
    int largest = maxFlower;


    while(largest >= 0){
    
        if(counts[largest] == 0){
            largest--;
            continue;
        }

        long long c = counts[largest];
    
        if(soFar + c < K){
        
            counts[largest] = 0;
        
            int nxt = nextVal[largest];
            counts[nxt] += c;

        
            soFar += c;
        } else {
        
        
        
            int answer = sod[largest];
            printf("%d\n", answer);
            return 0;
        }
    }




    printf("0\n");
    return 0;
}