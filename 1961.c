#include<stdio.h>

int main(){
    int p,n;
    scanf("%d %d",&p,&n);
    int arr[n];
    int flag = 1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1] && arr[i+1] - arr[i]>p){
            flag = 0;
        }else if(arr[i]>arr[i+1] && arr[i] - arr[i+1]> p){
            flag = 0;
        }
    }

    if(flag == 1){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }



    return 0;
}