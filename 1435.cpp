#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    while(size != 0){

        int m[size][size];

        int val = 1;

        int start = 0;
        int end = size;

        // int upto = size / 2;

        if(size % 2 == 0){
            for(int i = 0; i < size; i++){
                if(i < size/2){
                    for(int j = start; j < end; j++){
                        m[i][j] = val;           
                    }
                    start++;
                    end--;
                    val++;
                }else{
                    for(int j = start-1; j <= end; j++){
                        m[i][j] = val-1;
                    }
                    start--;
                    end++;
                    val--;
                }
            }

            int up_left = size/2-2;
            int up_right = size/2+1;

            for(int i = (size/2)-1; i > 0; i--){
                for(int j = up_left; j >=0; j--){
                    m[i][j] = m[i][j+1] - 1;
                }

                for(int k = up_right; k < size; k++){
                    m[i][k] = m[i][k-1] - 1;
                }
                up_left--;
                up_right++;
            }

            int bottom_left = size/2-2;
            int bottom_right = size/2+1;

            for(int i = size/2; i < size; i++){
                for(int j = bottom_left; j >= 0; j--){
                    m[i][j] = m[i][j+1] - 1;
                }

                for(int k = bottom_right; k < size; k++){
                    m[i][k] = m[i][k-1] - 1;
                }
                bottom_left--;
                bottom_right++;
            }

        }else{
            int start_index = 0;
            int end_index = size-1;
            int odd_val = 1;

            for(int i = 0; i < size; i++){
                if(i <= size/2){
                    for(int j = start_index; j <= end_index; j++){
                        m[i][j] = odd_val;
                    }
                    
                    odd_val++;
                    start_index++;
                    end_index--;
                }
                else{
                    if(i == (size/2)+1){
                        odd_val = odd_val - 2;
                        start_index = start_index - 2;
                        end_index = end_index + 2;
                    }
                    // cout<<"**--**"<<endl;
                    // cout<<start_index<<endl;
                    // cout<<end_index<<endl;
                    // cout<<"**--**"<<endl;

                    for(int j = start_index; j <= end_index; j++){
                        m[i][j] = odd_val;
                    }
                    start_index--;
                    end_index++;
                    odd_val--;
                    // odd_val = new_odd_val + 1;
                }
            
            }

            //Top operations
            int left_index = size/2 - 1;
            int right_index = size/2 + 1;
            for(int i=size/2; i > 0 ; i--){
                for(int j = left_index; j >= 0; j--){
                    m[i][j] = m[i][j+1] - 1;
                }

                for(int k = right_index; k < size; k++){
                    m[i][k] = m[i][k-1] - 1;
                }
                left_index--;
                right_index++;

            }

            //Bottom operation

            int left_index_b = size/2 - 2;
            int right_index_b = size/2 + 2;

            for(int i = size/2+1; i < size; i++){
                for(int j = left_index_b; j >= 0; j--){
                    m[i][j] = m[i][j+1] - 1;
                }

                for(int k = right_index_b; k < size; k++){
                    m[i][k] = m[i][k-1] - 1;
                }

                left_index_b--;
                right_index_b++;
            }

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
        // cout<<endl;
        cin>>size;
    }

   

}