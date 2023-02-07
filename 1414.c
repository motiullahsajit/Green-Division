#include<stdio.h>

int main(){
    
    int t, n;

    while (1)
    {
        scanf("%d %d",&t,&n);
        if(t==0) break;

        int draws = 0,points,total_points = 3 *n;
        char team[15];

        for(int i=0; i<t; i++){
            scanf("%s %d",team,&points);
            draws += points;
        }

        printf("%d\n",total_points - draws);

    }
    
    

    return 0;
}