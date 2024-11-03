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
        int start = 11;

        for(int i = 1; i <= 5; i++){
            for(int j = start; j < 12; j++){
                sum = sum + M[i][j];
            }
            start--;
            if(start < 7){
                break;
            }
        }   

        int start_2 = 7;
        for(int k = 6; k <= 10; k++){
            for(int l = start_2; l < 12; l++){
                sum = sum + M[k][l];
            }
            start_2++;

            if( start_2 == 12){
                break;
            }
        }

        double new_sum = ceil(sum * 10) / 10;

        cout<<fixed<<setprecision(1)<<new_sum<<endl;
        
    }else if(O == 'M'){
        double avg_sum = 0;
        int start = 11;
        int count = 0;

        for(int i = 1; i <= 5; i++){
            for(int j = start; j < 12; j++){
                avg_sum = avg_sum + M[i][j];
                count++;
            }
            start--;
            if(start < 7){
                break;
            }
        }   

        int start_2 = 7;
        for(int k = 6; k <= 10; k++){
            for(int l = start_2; l < 12; l++){
                avg_sum = avg_sum + M[k][l];
                count++;
            }
            start_2++;

            if(start_2 == 12){
                break;
            }
        }

        double average = avg_sum / count;
        cout<<fixed<<setprecision(1)<<average<<endl;


    }
}