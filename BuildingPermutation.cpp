#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)    cin>>a[i];

    sort(a,a+n);

    long long ans=0;
    for(long long i=0;i<n;i++){
        ans+=abs((i+1)-a[i]);
    }
    cout<<ans<<endl;
}