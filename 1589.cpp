#include<iostream>

using namespace std;

int main(){
    int test_case;
    cin>>test_case;

    int i = 0;
    while (i < test_case)
    {
        unsigned long r1;
        unsigned long r2;
        cin>>r1>>r2;

        unsigned long diameter = (r1*2 + r2*2);
        unsigned long rad = diameter / 2;
        
        cout<<rad<<endl;

        i++;
    }
    
}