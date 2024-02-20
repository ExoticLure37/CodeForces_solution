#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,change=0,flag=0,note25=0,note50=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        if(p == 25){
            note25++;
        }
        else if(p == 50){
            if(note25 == 0){
                flag =1;
                cout<<"NO\n";
                break;
            }
            else{
                note25--;
                note50++;
            }
        }
        else{
            if(note50 ==0){
                if(note25>=3){
                    note25-=3;
                    // note100++;
                }
                else{
                flag =1;
                cout<<"NO\n";
                break;
                }
            }
            else if(note50 >=1 && note25>=1){
                note50--;
                note25--;
            }
            else{
                flag =1;
                cout<<"NO\n";
                break;
            }
        }
    }
    if(flag == 0){
        cout<<"YES\n";
    }
    return 0;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     amthas += 25;
    //     amtret = a[i]-25;
    //     if(amtret>amthas){
    //         fl=0;
    //         break;
    //     }   
    // }
}