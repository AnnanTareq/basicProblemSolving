#include<iostream>

using namespace std;

int main(){
    int size;
    while(cin>>size){
        int m[size][size];

        int diag_h = size-1;

        for(int i = 0; i<size; i++){
            for(int j = 0; j < size; j++){
                if(i == j){
                    m[i][j] = 1;
                }
            }
        }

        for(int i = 0; i < size; i++){
            m[i][diag_h] = 2;
            diag_h--;
        }

        if(size%2==1){
            int start_t = 1; 
            int end_t = size - 2;
            //top portion
            for(int i = 0; i < size/2; i++){
                for(int j = start_t; j <= end_t; j++){
                    m[i][j] = 3;
                }
                start_t++;
                end_t--;
            }

            //bottom portion
            int start_bottom = 1;
            int end_bottom = size - 2;
            for(int i = size-1; i > size/2; i--){
                for(int j = start_bottom; j <= end_bottom; j++){
                    m[i][j] = 3;
                }
                start_bottom++;
                end_bottom--;
            }


            //left & right sides top portion
            int end_left_top = size/2-1;
            int end_right_top = size/2+1;

            for(int i = size/2; i >= 1; i--){
                for(int j = end_left_top; j >=0; j--){
                    m[i][j] = 3;
                }   

                for(int k = end_right_top; k < size; k++){
                    m[i][k] = 3;
                }
                end_left_top--;
                end_right_top++;
            }

            //left and right sides bottom portion
            int end_left_bottom = size/2-2;
            int end_right_bottom = size/2+2;
            for(int i = size/2+1; i < size; i++){
                for(int j = end_left_bottom; j >= 0; j--){
                    m[i][j] = 3;
                }

                for(int k = end_right_bottom; k < size; k++){
                    m[i][k] = 3;
                }
                end_left_bottom--;
                end_right_bottom++;
            }

            //right portion
            // for(int i = )
            
        }
        else{
            //top portion
            int start_top = 1;
            int end_top = size-2;
            for(int i = 0; i < size/2-1; i++){
                for(int j = start_top; j <= end_top; j++){
                    m[i][j] = 3;
                }
                start_top++;
                end_top--;
                if(start_top > end_top){
                    break;
                }
            }

            //bottom portion
            int start_bottom = 1;
            int end_bottom = size - 2;

            for(int i = size-1; i > size/2; i--){
                for(int j = start_bottom; j <= end_bottom; j++){
                    m[i][j] = 3;
                }
                start_bottom++;
                end_bottom--;
                if(start_bottom > end_bottom){
                    break;
                }
            }

            //left and right sides top portion
            int start_left_top = size/2-2;
            int start_right_top = size/2+1;
            for(int i = size/2-1; i > 0; i--){
                for(int j = start_left_top; j >= 0; j--){
                    m[i][j] = 3;
                }

                for(int k = start_right_top; k < size; k++){
                    m[i][k] = 3;
                }
                start_right_top++;
                start_left_top--;
            }

            //left and right sides bottom portion
            int start_left_bottom = size/2-2;
            int start_right_bottom = size/2+1;
            for(int i = size/2; i < size-1; i++){
                for(int j = start_left_bottom; j >= 0; j--){
                    m[i][j] = 3;
                }

                for(int k = start_right_bottom; k < size; k++){
                    m[i][k] = 3;
                }
                start_right_bottom++;
                start_left_bottom--;
            }
        }
        //print matrix
        for(int i = 0; i<size; i++){
            for(int j = 0; j < size; j++){
                cout<<m[i][j];
            }
            cout<<endl;
        }
    }

}