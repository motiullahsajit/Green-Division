#include<stdio.h>

int min(int x, int y){
    if(x < y) return x;
    else return y;
}

int max(int x, int y){
    if(x > y) return x;
    else return y;
}

int main(){

    int l1,l2,c1,c2,a,b,c;

    scanf("%d %d %d %d",&l1, &l2, &c1, &c2);

    a = min(l1,l2);
    b = min(c1,c2);

    a += b;

    c = min(max(l1,l2),max(c1,c2));

    int e = min(a,c);

    printf("%d\n",e*e);


}