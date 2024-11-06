#include<iostream>

using namespace std;

int main(){
    int length;

    while(cin>>length){

        int max_speed;
        int i = 0;
        while(i < length){
            int speed;
            cin>>speed;
            if(i == 0){
                max_speed = speed;
            }else{
                if(max_speed < speed){
                    max_speed = speed;
                }
            }
            i++;
        }
        
        if(max_speed < 10){
            cout<<1<<endl;
        }else if(max_speed >= 10 && max_speed < 20){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }
}