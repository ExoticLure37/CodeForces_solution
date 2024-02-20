#include<bits/stdc++.h>
using namespace std;
int solve(int n,int a,int b,int c,vector<int> & dp){

    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    int x,y,z;
    x = solve(n-a,a,b,c,dp)+1;
    y = solve(n-b,a,b,c,dp)+1;
    z = solve(n-c,a,b,c,dp)+1;

    dp[n] = max(x,max(y,z));
    return dp[n];
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1);
    cout<<solve(n,a,b,c,dp)<<endl;
}