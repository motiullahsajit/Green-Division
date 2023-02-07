#include<stdio.h>

int main(){

    int t;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int dice = 1, a[6],find[7]={0};

        for(int j=0;j<6;j++){

            scanf("%d",&a[j]);

            if(a[j] < 1 || a[j] > 6){
                dice = 0;
            }else{
                if(!find[a[j]]){
                    find[a[j]] = 1;
                }else{
                    dice = 0;
                }
            }

        }

        if(dice){
            if((a[0]+a[5])== 7 && (a[1]+a[3])==7 && (a[2]+a[4])==7){
                printf("SIM\n");
            }else{
                printf("NAO\n");
            }
        }else{
            printf("NAO\n");
        }

    }

    return 0;

}