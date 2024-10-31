#include<iostream>

using namespace std;

int main (){
    int arr[1000];
    int k;
    cin>>k;

    int j = 0;

    int i = 0;
    while (i < 1000)
    {
        if(j < k){
            arr[i] = j;
            j++;
        }else{
            j = 0;
            arr[i] = j;
            j++;
        }


        i++;
    }

    for (int i = 0; i < 1000; i++)
    {
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }


}