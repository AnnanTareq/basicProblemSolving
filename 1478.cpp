#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;

    while(size != 0){

        int m[size][size];

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(i == j){
                    m[i][j] = 1;
                }
                
            }
        }

        int start_index_right = 1;
        for(int i = 0; i < size; i++){
            for(int j = start_index_right; j < size; j++){
                m[i][j] = m[i][j-1] + 1;
            }
            start_index_right++;
        }

        int start_index_left = size - 2;
        for(int k = size -1; k > 0; k--){
            for(int l = start_index_left; l >= 0; l--){
                m[k][l] = m[k][l+1] + 1;
            }
            start_index_left--;
        }

        //printing matrix
            for(int i = 0; i < (size); i++){
                for(int j = 0; j < size; j++){
                    int count = 0;
                    int number = m[i][j];
                    while(number != 0){
                        number = number / 10;
                        count++;
                    }

                    int k = count;
                    while(k < 3){
                        cout<<' ';
                        k++;
                    }
                    cout<<m[i][j];

                    if(j != size-1 ){
                        cout<<' ';
                    }
                }
                cout<<endl;
            }
            cout<<endl;
            cin>>size;
    }
}