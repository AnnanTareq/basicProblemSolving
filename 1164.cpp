#include<iostream>

using namespace std;

int main(){

    int a;
    cin>>a;

    int i = 0;
    while(i < a){
        int x;
        cin>>x;

        int j = 1;
        int sum = 0;
        while(j < x){
            if(x % j == 0){
                sum = sum + j;
            }
            j++;
        }


        if(sum == x){
            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }

        i++;
    }
}