#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;

    int i = 1;
    while(i <= a){
        if(a % i == 0){
            cout<<i<<endl;
        }
        i++;
    }

    return 0;
}