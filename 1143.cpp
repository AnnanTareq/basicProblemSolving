#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    for (int i = 1; i < N+1; i++)
    {
        for(int j = 1; j < 4; j++){
            if(j == 1){
                cout<<i<<" ";
            }else if(j == 2){
                cout<<i * i<<" ";
            }else if(j == 3){
                cout<<i * i * i<<endl;
            }
        }
    }
    
}