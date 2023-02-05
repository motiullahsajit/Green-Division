#include<stdio.h>
#include<math.h>
int main(){

    int a,b,c,x,v;

    while (1)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a == 0 && b == 0 && c == 0) break;
        v = a * b * c;
        x = (int) cbrt(v);
        printf("%d\n",x);
    }
    

    return 0;
}