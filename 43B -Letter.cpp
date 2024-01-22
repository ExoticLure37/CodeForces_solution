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
    long long cnt=0;
    string s1,s2,s3;

    getline(cin, s1);
    getline(cin, s2);

    map<char,long long> mp;

    fi(i,0,s1.size()) mp[s1[i]]++;

    //   char ss=' ';
    fi(i,0, s2.size()) {
        if(s2[i] == ' ') {
            continue;
        } else {
            s3+=s2[i];
        }
    }

    fi(i,0,s3.size()) {
        if(mp[s3[i] ]>0  ) {
            mp[s3[i] ]--;
            cnt++;
        } else {
            cout<<"NO"<<endl;
            return ;
        }
    }
    if(cnt==s3.size())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    fast
    solve();
    return 0;
}
