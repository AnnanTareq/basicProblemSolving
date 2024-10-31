#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int N[20];

    int i = 0;
    int max = i;
    while (i < 20)
    {
        cin>>N[i];

        max = i;
        i++;
    }

    int last = max;

    int count = max/2;

    int j = 0;
    while(j < (count + 1)){
        int temp = N[max];
        N[max] = N[j];
        N[j] = temp;
        j++;
        max--;
    }

    int k = 0;
    while(k <= last){
        // cout<<"--------"<<endl;
        cout<<"N["<<k<<"] = "<<N[k]<<endl;
        k++;
    }
    
}