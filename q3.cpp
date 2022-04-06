#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
   cin>>t ;
   while(t--){
    long long int n ;
    cin>>n;
    long long int arr[n];
    long long int even =0;
    long long int odd =0;
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
        if(arr[i]%2 ==0){
            even++;
        }
        else {
            odd++;
        }

    }
    if(odd%2==0){
        cout<<min(odd/2,even)<<endl;
    }
    else{
        cout<<even<<endl;
    }
    }
    
   }

