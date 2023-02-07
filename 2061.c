#include<stdio.h>

int main(){

    int n,t;
    scanf("%d %d",&n, &t);
    int tabs = n;

    char command[100];


    for(int i=0; i<t;i++){
        scanf("%s",command);
        if(command[0] == 'f') tabs++;
        else tabs--;
    }

    printf("%d\n",tabs);
    

    return 0;
}