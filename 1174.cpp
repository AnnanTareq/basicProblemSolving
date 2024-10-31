#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double A[100];

    int i = 0;
    while (i < 100)
    {
        cin>>A[i];
        i++;
    }

    int j = 0;
    while(j<100){
        if(A[j] <= 10){
            cout<<"A["<<j<<"] = "<<fixed<<setprecision(1)<<A[j]<<endl; 
        }
        j++;
    }

}