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
        int start = 5;
        int end = 6;
        for(int k = 7; k < 12; k++){

            for(int l = start; l <= end; l++){
                sum = sum + M[k][l];
            }

            start--;;
            end++;
            if(start < 1 && end > 10){
                break;
            }

        }

        double new_sum = ceil(sum * 10) / 10;

        cout<<fixed<<setprecision(1)<<new_sum<<endl;

    }else if(O == 'M'){
        double avg_sum = 0;
        int count = 0;
        int start_avg = 5;
        int end_avg = 6;

        for(int m = 7; m < 12; m++){
            for(int n = start_avg; n <= end_avg; n++){
                avg_sum = avg_sum + M[m][n];
                count++;
            }
            start_avg--;
            end_avg++;

            if(start_avg == 1 && end_avg == 10){
                break;
            }
           
        }

        double average = avg_sum / count;
        cout<<fixed<<setprecision(1)<<average<<endl;
    }

}