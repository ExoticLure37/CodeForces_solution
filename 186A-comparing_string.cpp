#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.length();
    int m = s2.length();
    int cnt=0;

    pair<pair<char,char>,int> a,b;
    if(n!=m) {
        cout<<"NO";
    } else {
        for(int i=0; i<n; i++) {
            if(s1[i]!=s2[i]) {
                cnt++;
                a = {{s1[i],s2[i]},i};
                if(cnt==1)
                    b = a;
            }
        }

        if(cnt==0)
            cout<<"YES";
        else if(cnt==2) {
            if(a.first.second==b.first.first && a.first.first==b.first.second)
                cout<<"YES";
            else
                cout<<"NO";
        } else
            cout<<"NO";
    }
    return 0;
}
