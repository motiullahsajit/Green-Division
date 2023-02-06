#include<stdio.h>

int gcd(int x, int y){
    if (y == 0) return x;
    else gcd(y, x%y);
}

int main(){

    int n,a,b;
    while (1)
    {
        scanf("%d %d %d",&n,&a,&b);
        if(n==0 && a==0 && b==0) break;
        int lcm = (a * b) /gcd(a,b);
        int x = (n/a) + (n/b) - (n/lcm);
        printf("%d\n",x);

    }
    
    return 0;

}