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

    if(O == 'S'){   //summation block
        int flag = 1;

        float sum = 0;

        for(int k = 1; k < 12; k++){
            int l = 0;

            while(l < flag){
                sum = sum + M[k][l];
                l++;

                if(k == 11 && l == 11){
                    break;
                }
            }
            flag++;
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;

    }else if(O == 'M'){ //average block
        int flag_avg = 1;
        float sum_avg = 0;
        int count = 0;

        for(int m = 1; m < 12; m++){
            for(int n = 0; n < flag_avg; n++){
                if(m == 11 && n == 11){ 
                    break;
                }
                sum_avg = sum_avg + M[m][n];
                count++;
            }
            flag_avg++;
        }
        float avg = sum_avg / count;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

}