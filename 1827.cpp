#include<iostream>

using namespace std;

int main(){
    int size;
    
    while(cin>>size){

        int m[size][size];

        int val = 1;

        int start = 0;
        int end = size;

       
        int start_index = 0;
        // int end_index = size/3;

        int end_index_j = size - 1;
        // int odd_val = 1;
        int main_diagonal_bottom_index_start_i = size - (size/3);
        int main_diagonal_bottom_index_start_j = size - (size/3);
        int left_index = 1;
        int right_index = size - 1;

        int start_index_zero_top = 1;
        int end_index_zero_top = size - 2;

        //put value 2 at main diagonal - top portion
        for(int i = 0; i < size/3; i++){
            m[i][start_index] = 2; //value put in the first diagonal
            m[i][end_index_j] = 3; //value put in the second diagonal

            
            //this will put zeros on left and right sides top portion
            if(i > 0){
                for(int j = 0; j < left_index; j++){
                    m[i][j] = 0;
                }

                for(int k = right_index; k < size; k++){
                    m[i][k] = 0;
                }
                left_index++;
                right_index--;
            }

            start_index++;
            end_index_j--;

            for(int j = start_index_zero_top; j <= end_index_zero_top; j++){
                m[i][j] = 0;
            }
            start_index_zero_top++;
            end_index_zero_top--;
            
        }

        //middle operation
        int start_col_mid = size / 3;
        int end_col_mid = size - size/3;
        for(int i = start_col_mid; i < end_col_mid; i++){
            //put zero on the left
            for(int j = 0; j < size/3; j++){
            m[i][j] = 0;
            }
            //put zeroes on the right
        int start_index_right_zero = size - size/3;
            for(int k = start_index_right_zero; k < size; k++){
            m[i][k] = 0;
            }

            //as this matrix is a square matrix, but odd sized, so middle position value should be same as row value
            int middle = size / 2;

        
        int end_1_mid = size - size / 3;
        for(int l = size/3; l < end_1_mid; l++){
            if(i == middle && l == middle){
                m[i][l] = 4;
            }else{
                m[i][l] = 1;
            }
        }
        }

        //Bottom operation

        int start_index_col_bottom = size - size / 3;

        int end_index_zero_bottom_left = size / 3 - 1;
        int start_index_zero_bottom_right = size - size / 3 + 1;

        int start_index_zero_bottom_middle = size / 3;
        int end_index_zero_bottom_middle = size - size / 3 - 1;

        int end_index_3_botttom = size / 3 - 1;

        int start_index_2_bottom = size - size / 3;
        
        for(int i = start_index_col_bottom; i < size; i++){
            //put zeroes on the left
            for(int j = 0; j < end_index_zero_bottom_left; j++){
                m[i][j] = 0;
            }
            end_index_zero_bottom_left--;

            //put zeroes on the right of bottom
            for(int k = start_index_zero_bottom_right; k < size; k++){
                m[i][k] = 0;
            }
            start_index_zero_bottom_right++;

            //put 3 in second diagonal
            m[i][end_index_3_botttom] = 3;
            m[i][start_index_2_bottom] = 2;
            start_index_2_bottom++;
            end_index_3_botttom--;


            for(int o = start_index_zero_bottom_middle; o <= end_index_zero_bottom_middle; o++){
                m[i][o] = 0;
            }

            start_index_zero_bottom_middle--;
            end_index_zero_bottom_middle++;

           }


        //printing matrix
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                cout<<m[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}