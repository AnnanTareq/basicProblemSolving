#include<iostream>

using namespace std;

int main(){
    int N[10];

    int first;
    cin>>first;

    N[0] =  first;

    int j = 1;
    while (j < 10)
    {
        N[j] = N[j-1] * 2;
        j++;
    }

    int k = 0;
    while (k < 10)
    {
        cout<<"N["<<k<<"] = "<<N[k]<<endl;
        k++;
    }
    
    
}