#include<stdio.h>

int main(){
    int n, m, sum;

    while (scanf("%d %d", &n,&m) != EOF)
    {
        sum = 0;
        int w = m;
        while (m != 0)
        {
            sum += m%10;
            m = m/10;
        }

        if(w %3 == 0){
            printf("%d sim\n",sum);
        }else{
            printf("%d nao\n",sum);
        }
        

    }
    
  
    return 0;
}