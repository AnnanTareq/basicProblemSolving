#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int a;
    cin>>a;

    int i = 0;
    while (i < a)
    {
        int x;
        int y;
        // cout<<"x & y = ";
        cin>>x>>y;

        double p1;
        double p2;
        cin>>p1>>p2;

        if (x < y ) //This block only execute while first city has less population
        {
            double p3 = round(p1 * 10) / 10.0;  //It will ensure one decimal value after decimal point
            double p4 = round(p2 * 10) / 10.0;

            // cout<<"p3 = "<<p3<<endl;
            // cout<<"p4 = "<<p4<<endl;

            double sum_x = x;
            double sum_y = y;

            // cout<<"Sum x = "<<sum_x<<endl;
            // cout<<"SUm y = "<<sum_y<<endl;

            int count = 0;  //it counts how many years should be needed to pass away 

            while (sum_x <= sum_y)
            {
                sum_x = sum_x + (sum_x * (p3 / 100));
                sum_x = floor(sum_x);   //Since population can't be fraction, so always it maintain population value to the floor value
                sum_y = sum_y + (sum_y * (p4 / 100));
                sum_y = floor(sum_y);

                count++;

                if (sum_x > sum_y || count > 100)
                {
                    if(count <= 100){
                        cout<<count<<" anos."<<endl;
                    }else{
                        cout<<"Mais de 1 seculo."<<endl;
                    }
                    break;
                }
                
            }
        }else{
            cout<<0<<" anos."<<endl;
        }
        
        i++;
            
            
    }
    return 0;
}