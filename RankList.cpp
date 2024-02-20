#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
    if(a.first>b.first){
        return true;
    }
    else if(a.first==b.first && a.second<b.second){
        return true;
    }
    return false;
}
int main(){
    int n,k,a,b,cnt=0;
    cin>>n>>k;
    vector<pair<int,int> > p;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p.push_back({a,b});
        // t.push_back(b);
    }
    // cout<<"printing..."<<endl;
    sort(p.begin(),p.end(),cmp);
    // for(auto i:p){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<"KO"<<endl;
    auto candi = p[k-1];
    // cout<<candi.first<<" "<<candi.second<<endl;
    for(auto i: p){
        if(candi==i)    cnt++;
    }

    // auto topper = p[0];
    // stack<pair<int,int> > s;
    // for(int i=1;i<n;i++){
    //     if(p[i].first==topper.first && p[i].second==topper.second){
    //         continue;
    //     }
    //     else if(p[i].first==topper.first && p[i].second!=topper.second){
    //         if(p[i].second<topper.second){
    //             auto temp = s.top();
    //             s.pop();
    //             s.push(p[i]);
    //             s.push(temp);
    //         }
    //         else{
    //             s.push(p[i]);
    //         }
    //     }
    //     else{
    //         s.push(p[i]);
    //     }
    //     topper = s.top();
    // }
    // cout<<"PRINTING.."<<endl;
    // while(!s.empty()){
    //     cout<<s.top().first<<" "<<s.top().second<<endl;
    //     s.pop();
    // }
    cout<<cnt<<endl;
}