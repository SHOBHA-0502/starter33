#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t ;
   while(t--){
    int n ;
    cin>>n;
    int y ,k; 
    y = n /4;
    k = n%4;
    if(k==0){
        cout<< y<<endl;
    }
    else{
        cout<< y+1<<endl;
    }
   }

}