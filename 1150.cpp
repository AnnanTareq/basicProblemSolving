#include<iostream>

using namespace std;

int main (){
    int x, y;
    cin>>x;

    cin>>y;

    int sum = 0;

    while (x >= y)      //This will ensure to take right input value
    {
        cin>>y;
    }

    int count = 0;

    while(x < y){
        sum = sum + x;  //add iteratively into variable sum
        x++;
        count++;        //increase variable count value so that it represent how much iterate this loop

        if(sum > y){
            break;
        }

    }

    cout<<count<<endl;

    return 0;
}