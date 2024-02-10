#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,g;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>b>>g;
    int fl = (b>=g);
    
    while(b>0 && g>0){
        if(fl){
            cout<<"BG";
        }
        else{
            cout<<"GB";
        }
        b--;
        g--;
    }
    while(b--){
        cout<<'B';
    }
    while(g--){
        cout<<'G';
    }

    return 0;
}
