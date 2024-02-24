#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n],b[n];
    for(long long i=0;i<n;i++){    
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    long long suma[n];
    suma[0] = a[0];
    long long sumb[n];
    sumb[0] = b[0];
    for(long long i=1;i<n;i++){
        suma[i] = suma[i-1] + a[i];
        sumb[i] = sumb[i-1] + b[i];
    }

    // cout<<"SUMA"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<suma[i]<<" ";
    // }
    // cout<<endl<<"SUMB"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<sumb[i]<<" ";
    // }
    long long q;
    cin>>q;
    while(q--){
        long long t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            if(l-2>=0){
                cout<<suma[r-1]-suma[l-2]<<endl;
            }
            else{
                cout<<suma[r-1]<<endl;
            }
        }
        else if(t==2){
            if(l-2>=0){
                cout<<sumb[r-1]-sumb[l-2]<<endl;
            }
            else{
                cout<<sumb[r-1]<<endl;
            }
        }
    }
    return 0;
}