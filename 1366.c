#include<stdio.h>

int main(){
    int n,t,q;

    while (1)
    {
        scanf("%d",&n);
        if(n==0) break;

        int sticks = 0;

        for(int i=0;i<n;i++){
            scanf("%d %d",&t,&q);
            if(q%2 == 0) sticks += q;
            else sticks += q -1;
        }

        printf("%d\n",sticks/4);

    }
    

}