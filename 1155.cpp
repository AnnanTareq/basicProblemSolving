#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double sum = 0;

    int i = 1;
    while(i <= 100){
        double temp = 1.0/i;
        sum = sum + temp;
        i++;
    }

    cout<<fixed<<setprecision(2)<<sum<<endl;


    return 0;
}