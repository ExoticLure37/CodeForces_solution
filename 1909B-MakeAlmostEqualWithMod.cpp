#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n;cin>>n;
    ll a[n];
    ll odd=0,even=0;
    for(ll i=0;i<n;i++){ cin>>a[i];a[i]%2==0?even++ : odd++;}
    
    if(even>0 && odd>0){
        cout<<2<<endl;
        return;
    }
    //when there are either evens or odds only
    else{
        for(ll i=0;i<59;i++){
            set<ll> s;
            ll key=pow(2,i);
            for(auto ele:a){
                s.insert(ele%key);
                if(s.size()>2){
                    break;
                }
            }
            if(s.size()==2){
                cout<<key<<endl;
                return;
            }
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
