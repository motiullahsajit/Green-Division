#include<stdio.h>

int main(){

    long long i,n,k;

    while (1)
    {
        scanf("%lld",&k);
        if(k==0) break;
        n=0;
        for(i = 1; i<=k; i+=2){
            n += i;
            if (n > k) break;
            if(i > 1) printf(" ");
            printf("%lld",n);
        }
        printf("\n");

    }
    

    return 0;
}