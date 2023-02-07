#include<stdio.h>

int main(){

    int n;

    while (scanf("%d",&n) != EOF) 
    {
        int temp, book_code[n];
        for(int i=0; i<n; i++){
            scanf("%d",&book_code[i]);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(book_code[i] < book_code[j]){
                    temp = book_code[i];
                    book_code[i] = book_code[j];
                    book_code[j] = temp;
                }
            }
        }

        for(int i=0; i<n; i++){
            printf("%04d\n", book_code[i]);
        }


    }
    

    return 0;
}