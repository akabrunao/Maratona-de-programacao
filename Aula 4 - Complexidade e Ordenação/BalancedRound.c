//https://codeforces.com/problemset/problem/1850/D

#include <stdio.h>
#include <stdlib.h>


int compare_long_long(const void *a, const void *b) {
    long long arg1 = *(const long long*)a;
    long long arg2 = *(const long long*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}


int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        long long *a = (long long *)malloc(n * sizeof(long long));
        for (long long i = 0; i < n; ++i) {
            scanf("%lld", &a[i]);
        }

        
        qsort(a, n, sizeof(long long), compare_long_long);

        long long min_removed = n; 

        for (long long i = 0; i < (1LL << n); ++i) { 
            long long subset_size = 0;
            long long subset_count = 0;
            long long *subset = (long long *)malloc(n * sizeof(long long));

            for (long long j = 0; j < n; ++j) {
                if ((i >> j) & 1) { 
                    subset[subset_size++] = a[j];
                }
            }


            if (subset_size > 0) {
                int balanced = 1;
                for (long long j = 1; j < subset_size; ++j) {
                    if (abs(subset[j] - subset[j - 1]) > k) {
                        balanced = 0;
                        break;
                    }
                }
                if (balanced) {
                  min_removed = (min_removed < (n - subset_size)) ? min_removed : (n-subset_size);
                }
            }
            free(subset);
        }
        printf("%lld\n", min_removed);
        free(a);
    }
    return 0;
}
