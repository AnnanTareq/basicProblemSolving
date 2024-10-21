#include <stdio.h>
#include<iostream>

using namespace std;

int main() {
    int input;
    cin>>input;
    int start = 1;  

    for(int i = 0; i < input; i++){ //this will print row
        int k = 0;  //each row contains 4 column, so that it requires to print 4 values in every line
        while(k < 4){

            if(start % 4 == 0){
                cout<<"PUM"<<endl;
            }else{
                cout<<start<<" ";
            }
            start++;
            k++;
        }
    }
    
 
    return 0;
}