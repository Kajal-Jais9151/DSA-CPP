#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern5(int n) {
      for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
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
     obj.pattern5(n);
    }
    return 0;
}