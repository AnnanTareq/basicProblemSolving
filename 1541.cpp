#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double a, b, c;

    while(cin>>a && a != 0){    
        cin>>b>>c;
        double d = (a/c)*100;
        // cout<<d<<endl;
        double e = (b/c)*100;
        // cout<<"e = "<<e<<endl;

        double f = d * e;
        // cout<<"f = "<<f<<endl;
        double g = f * (c/100);

        cout<<int(sqrt(g))<<endl;
    }
}