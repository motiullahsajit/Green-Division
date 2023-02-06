#include<stdio.h>

int main(){
    int x,n;
    char command[1001];
    char dir[] = "NLSO";

    while (scanf("%d",&n) && n !=0)
    {
        scanf("%s",&command);
        x = 1;

        for(int i=0; i<n; i++){
            if(command[i] == 'D'){
                ++x;
                if(x > 4) x = 1;
            }else{
                --x;
                if(x == 0) x = 4;
            }
        }

        printf("%c\n",dir[x-1]);

    }
    

}