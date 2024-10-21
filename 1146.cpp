#include <stdio.h>
#include<iostream>

using namespace std;

int main() {
 
    int x;

    while(cin>>x && x>=0){
        if(x == 0){
            break;
        }else{
            for (int i = 1; i <= x; i++)
            {
                if(i == x){
                    cout<<i<<endl;
                }else{
                    cout<<i<<" ";
                }
                
            }
            
        }
    }
 
    return 0;
}