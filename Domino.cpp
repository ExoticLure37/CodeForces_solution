#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum1=0,sum2=0,cnt=0;
    cin>>n;
    int m = 2*n;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
        if(i%2==1) sum2+=a[i];
        else    sum1+=a[i];
    }
    // cout<<sum1<<" "<<sum2<<endl;
    if(sum1%2==1 && sum2%2==1){
        for(int i=0;i<m-1;i+=2){
            sum1=sum1-a[i]+a[i+1];
            sum2=sum2-a[i+1]+a[i];
            cnt++;
            if(sum1%2==0 && sum2%2==0){
                cout<<1;
                break;
            }
        }
        if(sum1%2==1 && sum2%2==1){
            cout<<-1;
        }
    }
    else if(sum1%2==0 && sum2%2==0){
        cout<<0;
    }
    else if((sum1%2==1 && sum2%2==0) || (sum1%2==0 && sum2%2==1)){
        cout<<-1;
    }
    return 0;
}