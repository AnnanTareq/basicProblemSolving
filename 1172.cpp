#include<iostream>

using namespace std;

int main(){
    int x[10];

    int i = 0;
    while(i < 10){
        cin>>x[i];
        i++;
    }

    int j = 0;
    while (j < 10)
    {
        if(x[j] <= 0){
            x[j] = 1;
        }
        j++;
    }

    int k = 0;
    while (k < 10)
    {
        cout<<"X["<<k<<"] = "<<x[k]<<endl;
        k++;
    }
    
    
}