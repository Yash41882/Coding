#include<iostream>
using namespace std;
int dp[100];
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}
int main(){
    int n;
    cin>>n;
  for (int i = 0; i <100; i++)
  {
      dp[i]=-1; 
  }
  cout<<fibo(n);  
}  