#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin>>x>>y;

    int check = 13;
    long long sum = 0;
    
    if (x<y)
    {
         while(x <= y){

        if (x % check != 0)
        {
            sum = sum + x;
        }
        
        x++;
        }

    }else{
        while(y <= x){

        if (y % check != 0)
        {
            sum = sum + y;
        }
        
        y++;
        }
    }
    

    

    cout<<sum<<endl;
}