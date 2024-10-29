
#include <iostream>

using namespace std;

int main()
{
   int x, y;
    cin>>x;

   int sum = 0;
    cin>>y;
    while(y<=0){
        
        cin>>y;
    }


    int count = x + y - 1;

    while (x <= count)
    {
        sum = sum + x;
        x++;
    }

    cout<<sum<<endl;

    return 0;
}