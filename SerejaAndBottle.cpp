#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long ans = n;
    vector<long long>  a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i != j and a[i] == b[j]){
                ans--;
                break;
            }
        }
    }
    cout << ans << endl;
}