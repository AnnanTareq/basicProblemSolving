#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int age;
    cin>>age;

    double sum = 0;
    int count = 0;

    while(age > 0){
        sum = sum + age;
        cin>>age;
        count++;
    }

    double avg = sum/count;
    cout<<fixed<<setprecision(2)<<avg<<endl;

    return 0;
}