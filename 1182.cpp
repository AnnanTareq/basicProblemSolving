#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    float M[12][12];

    int L;  
    cin>>L; //it is represented which row should be calculated

    char T;
    cin>>T; //This is represented which operation should be performed

    //This is for taking input over 144 index positions
    for(int r = 0; r < 12; r++){
        int i = 0;
        while(i < 12){
            cin>>M[r][i];
            i++;
        }
    }

    if(T == 'S'){
        //This block for summation of given row
        float sum = 0;

        for(int c = 0; c < 12; c++){
            sum = sum + M[c][L];
        }

        cout<<fixed<<setprecision(1)<<sum<<endl;

    }else if(T == 'M'){
        //This block for average calculation of given row
        float avg_sum = 0;

        for(int k = 0; k < 12; k++){
            avg_sum = avg_sum + M[k][L];
        }


        float avg = avg_sum / 12;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
}