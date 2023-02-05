#include<stdio.h>

int main(){

    int a,b,c,d,diff,temp;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    int arr[4] = {a,b,c,d};

    for(int i=0;i<4;i++){
        for(int j = i+1;j<4;j++){
            if(arr[i] < arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    if((arr[0]+arr[3]) > (arr[1]+arr[2])){
        diff = (arr[0]+arr[3]) - (arr[1]+arr[2]);
    }else{
        diff =  (arr[1]+arr[2]) - (arr[0]+arr[3]) ;
    }

    printf("%d\n",diff);

    return 0;
}