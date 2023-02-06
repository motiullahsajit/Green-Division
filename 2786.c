#include<stdio.h>

int main(){
    
    int w, l;

    scanf("%d %d",&w, &l);


    int shape2 = ((w - 1) + (l - 1)) * 2;
    int shape1 = (w*l)/0.5 - 1- shape2/2;

    printf("%d\n",shape1);
    printf("%d\n",shape2);

    return 0;
}