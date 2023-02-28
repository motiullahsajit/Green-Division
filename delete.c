#include<stdio.h>

int main(){
    int n,k,flag = 1;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Current array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the index of the value: ");
    scanf("%d",&k);

    if(k >=n){
        flag = 0;
        printf("Delete not possible\n");
    }else{
        for(int i=k; i>n-1; i--){
            arr[i] = arr[i+1];
        }
    }

    if(flag){
        
        printf("New array: ");

        for(int i=0; i<n-1; i++){
            printf("%d ",arr[i]);
        }

        printf("\n");

    }

    return 0;
}