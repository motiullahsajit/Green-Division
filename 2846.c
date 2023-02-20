#include<stdio.h>

#define MAX 100100

long long fibo[MAX];
long long fibonot[MAX];
void fib();
int main(){

    int n;
    fib();
    scanf("%d",&n);

    printf("%lld\n",fibonot[n]);

    return 0;
}

void fib(){

    int i,j,k;
    fibo[0]= 0; fibo[1]= 1;
    for(i=2;i<=MAX; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for(i = 1, j = 2, k = 1; i <=MAX; i++){
        if(fibo[j] != i){
            fibonot[k] = i;
            k++;
        }else 
            j++;
    }



}

