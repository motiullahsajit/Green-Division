#include<stdio.h>

int main(){

    int c,b,p,cr,br,pr;

    scanf("%d %d %d",&c,&b,&p);
    scanf("%d %d %d",&cr,&br,&pr);

    int will_not_rec = 0;

    if(cr> c){
        will_not_rec += cr - c;
    }
    if(br> b){
        will_not_rec += br - b;
    }
    if(pr> p){
        will_not_rec += pr - p;
    }

    printf("%d\n",will_not_rec);

    return 0;
}