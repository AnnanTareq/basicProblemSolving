#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n <= 0 && n >=46){
        cin>>n;
    }

    int a = 0;
    int b = 1;
    int c = 0;

    int i = 0;
    while(i < n){
        if(i == 0){
            cout<<a;
            // a = i;
        }else if(i == 1){
            cout<<b;
            // b = i;
        }else{
            c = a + b;
            cout<<c;
            a = b;
            b = c;
        }

        i++;
        if(i != n){
            cout<<" ";
        }else{
            cout<<endl;
        }
        
    }
    

    // return 0;
}