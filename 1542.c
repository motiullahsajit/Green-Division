#include<stdio.h>

int main()
{
    int q,d,p;

    while (scanf("%d",&q) && q != 0){
    
        scanf("%d %d",&d,&p);
        int pages = (q*d*p)/ (p-q);

        if(pages > 1){
            printf("%d paginas\n",pages);
        }else{
            printf("%d pagina\n",pages);

        }
    }
    

    
    return 0;

}