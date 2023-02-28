#include<stdio.h>

int main(){
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n],even[n],odd[n];

    int m = 0,o = 0;

    printf("Enter the elements: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Current array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even[m] = arr[i];
            m++;
        }else{
            odd[o] = arr[i];
            o++;
        }
    }

    printf("Evens:\n");

    for(int i=0; i<m; i++){
        printf("%d ",even[i]);
    }

    printf("\n");

    printf("Odds:\n");
    
    for(int i=0; i<o; i++){
        printf("%d ",odd[i]);
    }

    printf("\n");


    return 0;
}