#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float M[12][12];

    char O;
    cin>>O;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>>M[i][j];
        }
    }

    if(O == 'S'){
        int flag = 1;

        float sum = 0;

        for(int k = 0; k < 12; k++){
            int l = flag;

            while(l <= 11){
                sum = sum + M[k][l];
                l++;
                if(l == 11){
                    flag++;

                }

                if(k == 11 && l == 11){
                    break;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;

    }else if(O == 'M'){
        int flag_avg = 1;
        float sum_avg = 0;
        int count = 0;

        for(int m = 0; m < 12; m++){
            for(int n = flag_avg; n <= 11; n++){
                if(n == 11){
                    flag_avg++;
                }
                if(m == 11 && n == 11){
                    break;
                }
                sum_avg = sum_avg + M[m][n];
                count++;
            }
        }
        float avg = sum_avg / count;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }



}