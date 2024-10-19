#include <stdio.h>
#include<iostream> 
#include<iomanip>
using namespace std;

int main() {
 
    int i = 0;
    double k;
    double arr[2];

    while (i < 2 && cin>>k){
        if (k>=0 && k<=10)
        {
            arr[i] = k;
            i++;
            if(i==2){
                double media = (arr[0] + arr[1])/2;
                cout<<"media = "<<fixed<<setprecision(2)<<media<<endl;
            int X;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>X;

            while(X != 1 && X != 2){
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                cin>>X;
               
            }
            if(X == 1){
                i = 0;
            }else if (X==2)
            {
                /* code */break;
            }
            
            }
        }else
        {
            cout<<"nota invalida"<<endl;
        }
        
        
    }
     
 
    return 0;
}