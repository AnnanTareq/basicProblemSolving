#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    int i = 0;
    while (i < n)
    {
        cin>>arr[i];
        i++;
    }

    int index = 0;
    int value = 0;

    int k = 0;
    while (k < n-1)
    {
        if(k == 0){
            index = k;
            value = arr[k];
        }else{
            if(value > arr[k]){
                value = arr[k];
                index = k;
            }
        }
        
        k++;
    }

    cout<<"Menor valor: "<<value<<endl;
    cout<<"Posicao: "<<index<<endl;
    
    

}