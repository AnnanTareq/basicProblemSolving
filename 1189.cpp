#include<iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main(){
    float M[12][12];

    char O;
    cin>>O;

    // Used to take input from user
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>>M[i][j];
        }
    }

     if(O == 'S'){
        double sum = 0;
        int end = 1;
        for(int i = 1; i <= 5; i++){
            for(int j = 0; j < end; j++){
                sum = sum + M[i][j];
            }
            end++;

            if(end == 6){
                break;
            }
        }

        int tail = 4;

         for(int k = 6; k <= 10; k++){
            for(int l = tail; l >= 0; l--){
                sum = sum + M[k][l];
            }
            tail--;
        }

        double new_sum = ceil(sum * 10) / 10;

        cout<<fixed<<setprecision(1)<<new_sum<<endl;

     }else if(O == 'M'){
        double avg_sum = 0;
        int count = 0;
        int upto = 1;

        for(int m = 1; m < 6; m++){
            for(int n = 0; n < upto; n++){
                avg_sum = avg_sum + M[m][n];
                count++;
            }
            upto++;

            if(upto == 5){
                break;
            }
        }

        int tail_2 = 4;
        for(int o = 6; o < 11; o++){
            for(int p = tail_2; p >= 0; p--){
                avg_sum = avg_sum + M[o][p];
                count++;
            }
            tail_2--;
        }

        double average = avg_sum / count;
        cout<<fixed<<setprecision(1)<<average<<endl;

     }





}