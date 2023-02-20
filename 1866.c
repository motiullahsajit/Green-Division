#include<stdio.h>

int main(){

    int n,t;
    scanf("%d",&t);
    for(int j = 0; j <t;j++){
        scanf("%d",&n);
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(i%2==0){
                sum -= 1;
            }else{
                sum += 1;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}