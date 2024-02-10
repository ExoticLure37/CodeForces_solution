#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vpl = vector<pair<long ,long> >;


#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
#define readi(e) int e; cin >> e
#define readl(e) ll e; cin >> e
#define reads(e) string e; cin >> e
#define T int tt; cin >> tt; while(tt--)


template<typename U>
void print(U arr)
{
    for(auto element: arr) {
        cout << element << " ";
    }
    cout << endl;
}

// read and write into files, rather than standard i/o
void setup(string s)
{
    freopen((s+".in").c_str(), "r", stdin);
    freopen((s+".out").c_str(), "w", stdout);
}

const int M = 1e9+7;

bool cmp(pair<char,int> a,pair<char,int> b)
{
    if(a.second<b.second)   return true;
    else    return false;
}

void solve()
{
   //write code here
    readi(n);
    reads(s);
    
    string s1,s2;
    forn(i,n){
        s1+=s[i];
        s2+=s[i+n];
    }
    
    sort(all(s1));
    sort(all(s2));
    int less=1,great=1;
    for (size_t i = 0; i < n; ++i){
        if (s1[i] >= s2[i]){
            less = false;
            break;
        }
    }
    for (size_t i = 0; i < n; ++i){
        if (s1[i] <= s2[i]){
            great = false;
            break;
        }
    }
    cout << ((less || great) ? "YES" : "NO") << endl;
    return ;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // readi(t);
    int t=1;
    while(t--) {
        solve();
    }

    return 0;
}
