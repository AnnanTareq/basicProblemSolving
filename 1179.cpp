#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   int par[5];
   int impar[5];

   int flag_par = 0;
   int flag_impar = 0;

    int par_size = 0;
    int impar_size = 0;

   int i = 0;
   while (i < 15)
   {
    int x;
    cin>>x;

    if(x % 2 == 0){
        par[par_size] = x;
        par_size++;

        if(par_size == 5 && flag_par < 1){
            for (int i = 0; i < 5; i++)
            {
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
            }
            

            par_size = 0;
            flag_par = 1;
        }
    }else if(x % 2 == 1 || x % 2== -1){
        impar[impar_size] = x;
        impar_size++;
        if(impar_size == 5 && flag_impar < 1){
            for(int j = 0; j< 5; j++){
                cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
            }
            impar_size = 0;
        }
    }


    i++;
   }

   if(impar_size > 0){
    for(int k = 0; k < impar_size; k++){
        cout<<"impar["<<k<<"] = "<<impar[k]<<endl;
    }
   }

   if(par_size > 0){
    for(int l = 0; l < par_size; l++){
        cout<<"par["<<l<<"] = "<<par[l]<<endl;
    }
   }
   
    
}