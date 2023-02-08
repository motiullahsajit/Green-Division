#include<stdio.h>

int main(){

    int t;
    int a,b, ap,bp;

    while (1)
    {
        scanf("%d",&t);
        if(t == 0) break;
        ap = 0;
        bp = 0;

        for(int i=0; i<t; i++){
            scanf("%d %d",&a,&b);

            if(a > b){
                ap++;
            }else if(b > a){
                bp++;
            }

        }

        printf("%d %d\n",ap,bp);

    
    }
    

    return 0;
}