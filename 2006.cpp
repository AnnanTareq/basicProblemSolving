#include <stdio.h>
#include<iostream>

using namespace std;

int main() {
 
   int T;
   cin>>T;

    int A, B, C, D, E;
    int arr[5] = {A, B, C, D, E};
    int i = 0;
    while (i<5 )
    {
        cin>>arr[i];
        while (arr[i]>4 || arr[i]<1)
        {
            cin>>arr[i];
        }
        
        i++;
    }

    int flag = 0;
    int k = 0;
    while (k<5)
    {
        if(arr[k] == T){
            flag++;
        }
        k++;
    }

    cout<<flag<<endl;
    
    

     
     
 
    return 0;
}
