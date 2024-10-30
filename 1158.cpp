#include<iostream>

using namespace std;

int main(){ 
    int n;
    cin>>n;

    int i = 0;
    while(i<n){
        int x, y;
        cin>>x>>y;

        int count = 0;
        int sum = 0;
        while (count < y)
        {
            if(x % 2 != 0){
                sum = sum + x;
                count++;
            }
            x++;
        }
        cout<<sum<<endl;
        i++;
        
    }

    return 0;
}