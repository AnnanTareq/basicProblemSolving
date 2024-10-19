#include <stdio.h>
#include<iostream> 
// #include<iomanip>
#include<cstdio>

using namespace std;

int calculation(int x, int y, int *iw, int *gw, int *d, int *t){
        int Inter_goal = x;
        int Gremio_goal = y;

        int i_w = *iw;
        int g_w = *gw;
        int dr = *d;
        int total = *t;

        // int iw, gw, d = 0;
        if(Inter_goal > Gremio_goal){
            i_w++;
            total++;
        }else if(Gremio_goal>Inter_goal){
            g_w++;
            total++;
        }else{
            dr++;
            total++;
        }
        *t = total;
        *iw = i_w;
        *gw = g_w;
        *d = dr;
        // return iw, gw, d;2
    }

int main() {

    int Inter_goal, Gremio_goal;
    scanf("%i", &Inter_goal);
    scanf("%i", &Gremio_goal);
    // cin>>Inter_goal>>Gremio_goal;

    int Inter_win = 0, Gremio_win = 0;
    int draw = 0;
    int total = 0;

    calculation(Inter_goal, Gremio_goal, &Inter_win, &Gremio_win, &draw, &total);
    

    int yes;
    // string msg = ;
    
    while (printf("Novo grenal (1-sim 2-nao)") && scanf("%i", &yes) && yes == 1)
    {
        int i, g;
        scanf("%i", &i);
        scanf("%i", &g);
        // cin>>i>>g;
        calculation(i, g, &Inter_win, &Gremio_win, &draw, &total);
        
    }

    printf("%i grenais\n", total);
    printf("Inter:%i\n", Inter_win);
    printf("Gremio:%i\n", Gremio_win);
    printf("Empates:%i\n", draw);

    if(Inter_win > Gremio_win){
        printf("Inter venceu mais");
    }else if(Gremio_win > Inter_win){
        printf("Gremio venceu mais");
    }else{
        printf("Nao houve vencedor");
    }
        

    return 0;
}