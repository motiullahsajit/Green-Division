#include<stdio.h>

int main(){
    int t,n;

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d",&n);

        int numbers[n];

        int total = 0;

        int count = 0, avr;

        for(int j=0; j<n; j++){
            scanf("%d",&numbers[j]);
            total += numbers[j];
        }
        avr = total / n;

        for(int k=0; k<n; k++){
            if(numbers[k] > avr) count++;
        }

        printf("%.3f%%\n",((float)count/(float)n)*100.00);

        
    }

    return 0;
}