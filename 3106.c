#include<stdio.h>

int main(){
    int n,students,total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&students);

        if(students%3 == 0){
            total += students;
        }else{
            total += (students - (students%3));
        }
    }

    printf("%d\n", total);

    return 0;
}