#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        long long prefixSum[n+1];
        prefixSum[0] = 0;
        for(int i=1;i<=n;i++){
            prefixSum[i] = prefixSum[i-1] + a[i-1];
        }

        long long ans = 0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                long long mn = LLONG_MAX,mx = LLONG_MIN;
                for(int j=i;j<=n;j+=i){
                // long long a = 
                    mn = min(mn,(prefixSum[j] - prefixSum[j-1]));
                    mx = max(mx,(prefixSum[j] - prefixSum[j-1]));
                }
                ans = max(ans,mx-mn);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}