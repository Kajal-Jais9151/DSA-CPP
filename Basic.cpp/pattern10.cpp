#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern10(int n) {
       for(int i=0; i<2*n; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
       }    
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     Solution obj;
     obj.pattern10(n);
    }
    return 0;
}