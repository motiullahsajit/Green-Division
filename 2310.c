#include<stdio.h>

int main(){

    int t;

    scanf("%d", &t);
    
        char name[100];
        int service, blocks, attacks,service_s, blocks_s, attacks_s, total_s = 0, total_b = 0, total_a = 0,total_s_s = 0, total_b_s = 0, total_a_s = 0;
        for(int i = 0; i <t; i++){
            scanf("%s", name);
            scanf("%d %d %d", &service, &blocks, &attacks);
            total_s+=service;
            total_b+=blocks;
            total_a += attacks;
            scanf("%d %d %d", &service_s, &blocks_s, &attacks_s);
            total_s_s += service_s;
            total_b_s += blocks_s;
            total_a_s += attacks_s;
        }

        printf("Pontos de Saque: %.2f %%.\n",((float)total_s_s/(float)total_s)*100.00);
        printf("Pontos de Bloqueio: %.2f %%.\n",((float)total_b_s/(float)total_b)*100.00);
        printf("Pontos de Ataque: %.2f %%.\n",((float)total_a_s/(float)total_a)*100.00);
    
    

    return 0;
}