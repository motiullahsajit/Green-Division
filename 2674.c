#include<stdio.h>
#include<math.h>

int check_prime(int n){
    if(n==0||n==1)return 0;
    if(n==2) return 1;
    if(n%2==0)return 0;

    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i==0){
           return 0;
        }
    }

    return 1;
}

int is_super_prime(int n){
    while (n>=10)
    {
        int d = n %10;
        n /= 10;
        if(check_prime(d) == 0) return 0;

    }

    if (n==2 || n==3 || n==5 || n == 7) return 1;
    else return 0;
    
}

int main(){

    int n;

    while (scanf("%d", &n) != EOF)
    {
       
        if(check_prime(n) == 0){
            printf("Nada\n");
        }else{
            if(is_super_prime(n) == 1) printf("Super\n");
            else printf("Primo\n");
        }
    }
    
    

    return 0;
}