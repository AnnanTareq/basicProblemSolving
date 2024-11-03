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
        float sum = 0;
        int start = 11;
        for(int i = 1; i< 12; i++){
            for(int j = start; j < 12; j++){
                sum = sum + M[i][j];
            }
            start--;

            if(start == 0){
                break;
            }
        }

        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(O == 'M'){
        float avg_sum = 0;
        int pos = 11;
        int count_avg = 0;

        for(int k = 1; k < 12; k++){
            for(int l = pos; l < 12; l++){
                avg_sum = avg_sum + M[k][l];
                count_avg++;
            }
            pos--;
            if(pos == 0){
                break;
            }
        }

        float avg = avg_sum / count_avg;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

}