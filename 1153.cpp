#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int fact = n;

    while(n > 1){
        n--;
        fact = fact * n;

    }

    cout<<fact<<endl;


    return 0;
}