#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    float M[12][12];

    char O;
    cin>>O;

    //Used to take input from user
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>>M[i][j];
        }
    }

    if(O == 'S'){
        int upto = 11;
        float sum = 0;
        for(int i = 0; i < 11; i++){
            for(int j = 0; j < upto; j++){
                sum = sum + M[i][j];
            }
            upto--;
        }

        cout<<fixed<<setprecision(1)<<sum<<endl;
        
    }else if(O == 'M'){
        int end = 11;
        float avg_sum = 0;
        int count = 0;
        for(int k = 0; k < 11; k++){
            for(int l = 0; l < end; l++){
                avg_sum = avg_sum + M[k][l];
                count++;
            }
            end--;
        }

        float avg = avg_sum / count;

        cout<<fixed<<setprecision(1)<< avg<<endl;
    }

}