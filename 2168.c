#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n+1][n+1];

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] + arr[i][j+1] + arr[i+1][j]+arr[i+1][j+1] < 2)printf("U");
            else printf("S");
        }
        printf("\n");
    }

}

