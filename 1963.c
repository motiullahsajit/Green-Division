#include<stdio.h>

int main(){

    double old, new;

    while(scanf("%lf %lf",&old,&new) == 2){
        printf("%.2lf%%\n",((new-old)/old )*100);
    }
   
  
    return 0;
}