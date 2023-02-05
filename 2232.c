#include<stdio.h>
#include<math.h>

int main(){
    int n,x;

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        printf("%ld\n",(long)(pow(2,x)-1));
    }


    return 0;
}