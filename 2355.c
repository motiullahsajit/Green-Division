#include<stdio.h>
#include<math.h>


int main(){
    unsigned long int n;
    int b, g;
    while (1)
    {
        scanf("%lu",&n);
        if(n==0) break;

        double avr = n/ 90.0;

        b = floor(avr*1);
        g = ceil(avr*7);

        printf("Brasil %d x Alemanha %d\n", b,g);


    }
    

    return 0;
}