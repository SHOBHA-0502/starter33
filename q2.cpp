#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t ;
   while(t--){
       int n ; 
       cin>>n ;
       string s;
       cin>>s;
       int count1 =0;
       int count2=0;
       for(int i =0 ; i<n ;i++){
           if(s[i]=='1'){
               count1++;
           }
           if(s[i]==s[i+1] && s[i]=='1'){
               count2++;
            // cout<< "yes"<<endl;
           }

       }
    //    cout<<count1<<" "<<count2<<endl;
       if(count1== 0){
           cout<<"0"<<endl;

       }
       else if(count2==0){
           cout<<"1"<<endl;
       }
       else {
           cout<< "2"<<endl;
       }
      

    
   }

}