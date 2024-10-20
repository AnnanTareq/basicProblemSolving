#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin>>x>>y;

    while (x < 0)
    {
        cin>>x;
    }

    while(y < 0){
        cin>>y;
    }
    

   
    if(x < y){
        while (x < y)
        {
            x++;
            if(x % 5 == 2 || x % 5 == 3){
                cout<<x<<endl;
            }
        }
        
    }else if(x > y ){
        while (x > y)
        {
            y++;
            if(y % 5 == 2 || y % 5 == 3){
                cout<<y<<endl;
            }
        }
    }
}