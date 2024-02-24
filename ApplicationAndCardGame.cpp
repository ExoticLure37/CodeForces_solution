#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;

int main(){
    long long n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    map<char,long long> mp;
    for(long long i=0;i<n;i++){
        mp[s[i]]++;
    }
    
    priority_queue<pair<long long,char> > pq;
    
    for(auto i: mp){
        // cout<<i.first<<" "<<i.second<<endl;
        pq.push({i.second,i.first});
    }
    long long ans=0;
    // while(k>0){
    //     auto temp = pq.top();
    //     pq.pop();
    //     int val = temp.second;
    //     if(k>=val){
    //         ans+=(val*val);
    //     }
    //     else{
    //         long long p = val-k;
    //         ans+=(p*p);
    //     }
    //     k = k-val;
    // }
    while(!pq.empty()){
        auto temp = pq.top();
        pq.pop();
        long long val = temp.first;
        // cout<<"val="<<val<<endl;
        if(val<=k){
            ans+=(val*val);
        }
        else{
            ans+=(k*k);
        }
        k-=val;
        if(k<=0){
            break;
        }
        // cout<<ans<<endl;
    }
    
    cout<<ans<<endl;
    return 0;
}
