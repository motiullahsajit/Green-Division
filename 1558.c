#include<stdio.h>
#include<math.h>
int main(){

    int n;

    while (scanf("%d", &n) != EOF)
    {
        int sqr = sqrt(n),flag = 1;
        for(int i = 0; i <= sqr; i++){
            for(int j = 0; j <= sqr; j++){
                if((pow(i,2) + pow(j,2)) == n){
                    printf("YES\n");
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) break;
        }
        if(flag == 1){
            printf("NO\n");
        }
    }
    


    return 0;
}