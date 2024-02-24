#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;

int main(){
    int n,m,d;
    cin>>n>>m>>d;
    int k = n*m;
    int a[k];
    for(int i=0;i<k;i++){
        cin>>a[i];
    }

    sort(a,a+k);
    int ans = 0 , fl = 1;
    int st=0,end=k-1;
    while(st<end){
        int dif = a[end] - a[st];
        
        // cout<<a[end]<<" "<<a[st]<<" "<<dif<<endl;
        if(dif%d!=0){
            fl=0;
            break;
        }
        if(dif==0){
            break;
        }
        ans+=dif/d;
        st++;
        end--;
    }

    if(fl==0){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}
