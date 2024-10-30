#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    double a = 1;   //used double typed variable so that when it will be divided, at that time it will not loose its decimal values which comes after decimal point
    int b = 1;

    double sum = 0.0;

    while(a <= 39){
        sum = sum + (a/b);
        a = a + 2;
        b = b * 2;
    }

    cout<<fixed<<setprecision(2)<<sum<<endl;

    return 0;
}