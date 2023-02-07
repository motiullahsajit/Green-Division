#include<stdio.h>

int main(){

    int f,j;

    while (1)
    {
        scanf("%d",&f);
        if(f==0) break;

        j=0;

        for(int i=1; j+i<=f; i++){
            j+=i;
        }

        printf("%d %d\n",j,f-j);

    }

    return 0;
}