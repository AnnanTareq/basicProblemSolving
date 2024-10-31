#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;

    int i = 0;
    while(i < a){
        int b;
        cin>>b;

        unsigned long long arr[b];  //It will hold maximum number of value, which usually integer typed variable can not hold
        
        int j = 0;
        while(j <= b){
            if(j == 0){
                arr[j] = 0;
            }else if(j == 1){
                arr[j] = 1;
            }else{
                arr[j] = arr[j-1] + arr[j - 2];
            }
            
            j++;
        }

        cout<<"Fib("<<b<<") = "<<arr[b]<<endl;


        i++;
    }



}