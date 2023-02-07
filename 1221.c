#include<stdio.h>

int main(){
    int n,number,flag;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        flag = 1;
        scanf("%d", &number);

        for(int j=2;j<=(number/2);j++){
            if(number%j == 0){
                flag = 0;
                break;
            }
        }

        if(flag){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }

    }

}