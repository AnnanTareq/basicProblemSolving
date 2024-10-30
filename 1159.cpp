#include<iostream>

using namespace std;


int main(){
    int a;
    cin>>a;

    while (a != 0)
    {
        int i = 0;
        int sum = 0;
        while (i < 5)
        {
            if(a % 2 == 0){
                sum = sum + a;
                i++;   
            }
            a++;
        }

        cout<<sum<<endl;
        
        cin>>a;
        
    }
    

    return 0;
}