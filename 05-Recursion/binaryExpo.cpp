#include<bits/stdc++.h>
using namespace std;

  double myPow(double x, int n) {
      double ans=1.0;
      long long N=n;
      if(N<0){
        N=-1*N;
      }

      while(N){
        if(N%2){
            ans=ans*x;
            N=N-1;
        }
        else{
            x=x*x;
            N=N/2;
        }
      }
      if(n<0) return 1.0/ans;
      return ans;
    }
int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    double result = myPow(x, n);
cout << result;

    return 0;
}