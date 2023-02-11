#include<stdio.h>

int main(){

    int n,q,query,temp;

    while (scanf("%d %d",&n, &q) != EOF)
    {
        int grades[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&grades[i]);
        }

        for(int i=0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(grades[i] < grades[j]){
                    temp = grades[i];
                    grades[i] = grades[j];
                    grades[j] = temp;
                }
            }
        }

        for(int i = 0; i < q; i++){
            scanf("%d", &query);
            printf("%d\n",grades[query-1]);
        }

    }
    

    return 0;
}