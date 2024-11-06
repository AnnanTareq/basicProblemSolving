#include<iostream>

using namespace std;

int main(){
    int j;
    cin>>j;

    int i = 0;
    while(i < j){
        cout<<"Ho";
        i++;
        if(i != j){ //This block helps to print space before last number
            cout<<" ";
        }

        if(i == j){ //While all the numbers printed it will executed
            cout<<"!"<<endl;
        }
    }
}