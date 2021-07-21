#include<iostream>
#include <climits>
using namespace std;
int mincoins(int n,int coins[],int t,int dp[]){
    if(n==0){
        return 0;
    }
    //rec
    if(dp[n]!=0){
        return dp[n];
    }
    int ans=INT_MAX;
    for (int i = 0; i <t; i++)
    {
        if(n-coins[i]>=0){
        int subprob=mincoins(n-coins[i],coins,t,dp);
        ans=min(ans,subprob+1);
        }
    }
    dp[n]=ans;
    return dp[n];
    
}
int main(){
    int n;
    cin>>n;
    int coins[]={1,7,10};
    int t=sizeof(coins)/sizeof(int);
    int dp[100]={0};
    cout<<mincoins(n,coins,t,dp);
    return 0;
}