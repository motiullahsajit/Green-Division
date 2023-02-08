#include<stdio.h>

int main(){

    int arr[5];

    int c =1 , d = 1;

    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<4; i++){
        if(arr[i] < arr[i+1]){
            d = 0;
        }

        if(arr[i] > arr[i+1]){
            c = 0;
        }
    }

    if(c == 1) printf("C\n");
    else if (d == 1) printf("D\n");
    else printf("N\n");

    

    return 0;
}