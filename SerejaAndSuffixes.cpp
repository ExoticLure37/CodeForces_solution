#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,val,cnt=0,q;
    cin>>n>>m;
    int a[n] ;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // mp[a[i]]++;
    }

    int b[n];
    for(int i=n-1;i>=0;i--){
        val = a[i];
        auto itr = s.find(val);
        if(itr==s.end()){
            cnt++;
        }
        b[i] = cnt;
        s.insert(val);
    }

    while(m--){
        cin>>q;
        cout<<b[q-1]<<endl;
    }

}