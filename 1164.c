#include<stdio.h>

int main(){
    int n,number,divisor_sum;
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d", &number);
        divisor_sum = 0;
        for(int j=1;j<=(number/2);j++){
            if(number%j == 0){
                divisor_sum += j;
            }
        }

        if(divisor_sum == number){
            printf("%d eh perfeito\n",number);
        }else{
            printf("%d nao eh perfeito\n",number);
        }

    }

}