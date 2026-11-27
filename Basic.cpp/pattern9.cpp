
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern7(int n) {
       for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
          cout<<"*";
        }
        cout<<endl;
       }
    } 
       

    void pattern8(int n) {
       for(int i=n; i>0; i--){
         for(int j=n-i; j>0; j--){
          cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
       }
    }    
    
    void pattern9(int n) {
       pattern7(n);
       pattern8(n);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     Solution obj;
     obj.pattern9(n);
    }
    return 0;
}
