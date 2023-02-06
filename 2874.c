#include<stdio.h>
#include <math.h>

int binaryToDecimal(int binary)
{
    int decimal = 0;
    int base = 1;
    int rem;

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    return decimal;
}
int main(){

    int n;
    int num;
    while (scanf("%d",&n) != EOF)
    {
        int text[n];
       
        for(int i=0; i<n; i++){
            scanf("%d", &num); 
            text[i] = binaryToDecimal(num);
        }
        for(int i = 0; i < n; i++){
            printf("%c", text[i]);
        }
        printf("\n");
    }
    

    return 0;
}