#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue
#define pb push_back
#define pf push_front
#define mod1 1000000007
#define all v.begin(),v.end()

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vvi vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define fi(i,L,R) for (int i = L; i < R; i++)
#define fd(i,R,L) for (int i = R; i > L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n,fl=1;
    cin>>n;
    int a[n];

    map<int,int> mp;
    fi(i,0,n) {
        cin>>a[i];
        mp[a[i]]++;
    };

    int k = n/3;
    int ans[3] = {0};
    while(k--) {
        if(mp[1]>0 && mp[2]>0 && mp[4]>0) {
            ans[0]++;
            mp[1]--;
            mp[2]--;
            mp[4]--;
            continue;
        }
        if(mp[1]>0 && mp[2]>0 && mp[6]>0) {
            ans[1]++;
            mp[1]--;
            mp[2]--;
            mp[6]--;
            continue;
        }
        if(mp[1]>0 && mp[3]>0 && mp[6]>0) {
            ans[2]++;
            mp[1]--;
            mp[3]--;
            mp[6]--;
            continue;
        }
        fl = 0;
        break;
    }
    k = n/3;

    if(fl==0) {
        cout<<-1<<'\n';
    } else {
        while(ans[0]--) cout<<"1 2 4"<<'\n';
        while(ans[1]--) cout<<"1 2 6"<<'\n';
        while(ans[2]--) cout<<"1 3 6"<<'\n';
    }
}
int main()
{
    fast
    solve();
    return 0;
}
