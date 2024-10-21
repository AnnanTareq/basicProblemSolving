#include<iostream>

using namespace std;

int main(){
    //These variables will take a count of preferences
    int alcohol = 0;    
    int gasoline = 0;
    int diesel = 0;


    //variable x will take a positive integer input
    int x;

    while (cin >> x && x > 0)
    {
        if(x == 1){
            alcohol++;
        }else if(x == 2){
            gasoline++;
        }else if(x == 3){
            diesel++;
        }else if(x == 4){
            break;
        }
        
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcohol<<endl;
    cout<<"Gasolina: "<<gasoline<<endl;
    cout<<"Diesel: "<<diesel<<endl;
    
    return 0;
}