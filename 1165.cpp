#include<iostream>

using namespace std;

int main(){

    int a;
    cin>>a;

    int i = 0;
    while (i < a)
    {
        int k;
        cin>>k;
        int flag = 0;
        int j = 2;
        while (j < k)
        {
            if(k % j == 0){
                flag++;
                break;
            }
            j++;
        }

        if(flag > 0){
            cout<<k<<" nao eh primo"<<endl;
            
        }else{
            cout<<k<<" eh primo"<<endl;
        } 

        i++;
    }
}