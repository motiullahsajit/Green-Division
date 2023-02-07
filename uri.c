#include <stdio.h>


int main() {
    
    long long i, n, k;

    while (scanf("%lld", &k) && k != 0) {
        n = 0;
        if (k == 0) break;

        for (i = 1; i <= k; i += 2) {
            n += i;
            if (n > k) break;
            if (i > 1) printf(" ");
            printf("%lld", n);
        }
        printf("\n");
    }

    return 0;
}