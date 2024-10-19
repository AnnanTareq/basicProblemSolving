#include <stdio.h>
#include<iostream> 
#include<cstdio>

using namespace std;

int main(){
    int Inter_goal, Gremio_goal;
    scanf("%i", &Inter_goal);
    scanf("%i", &Gremio_goal);

    int Inter_win = 0, Gremio_win = 0;
    int draw = 0;
    int total = 0;

    if (Inter_goal > Gremio_goal){
        Inter_win++;
        total++;
    }else if(Gremio_goal > Inter_goal){
        Gremio_win++;
        total++;
    }else{
        draw++;
        total++;
    }

    int yes;

    while (printf("Novo grenal (1-sim 2-nao)\n") && scanf("%i", &yes) && yes == 1)
    {
        scanf("%i", &Inter_goal);
        scanf("%i", &Gremio_goal);
        
        if (Inter_goal > Gremio_goal){
            Inter_win++;
            total++;
        }else if(Gremio_goal > Inter_goal){
            Gremio_win++;
            total++;
        }else{
            draw++;
            total++;
        }
    }

    printf("%i grenais\n", total);
    printf("Inter:%i\n", Inter_win);
    printf("Gremio:%i\n", Gremio_win);
    printf("Empates:%i\n", draw);

    if(Inter_win > Gremio_win){
        printf("Inter venceu mais\n");
    }else if(Gremio_win > Inter_win){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }   
    return 0;
}