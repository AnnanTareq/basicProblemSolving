#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double arr[100];

    double a;
    cin>>a;

    int i = 0;
    while (i < 100)
    {
        if(i == 0){
            arr[i] = a;
        }else{
            arr[i] = a/2;
            a = a/2;
        }
        i++;
    }

    for (int j = 0; j < 100; j++)
    {
        cout<<fixed<<setprecision(4)<<"N["<<j<<"] = "<<arr[j]<<endl;
    }
    
    

}