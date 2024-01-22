#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue
#define pb push_back
#define pf push_front
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define fi(i,L,R) for (int i = L; i < R; i++)
#define fd(i,R,L) for (int i = R; i > L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    char ans[n][m];
    fi(i,0,n) {
        fi(j,0,m) {
            cin>>a[i][j];
            if(a[i][j]=='.') {
                if((i+j)&1)   ans[i][j]='W';
                else    ans[i][j] = 'B';
            }
            else    ans[i][j]='-';
        }
    }

    // int dx[] = {-1,0,1,0};
    // int dy[] = {0,1,0,-1};

    // if(a[0][0] != '-')  a[0][0]='B';
    // else{

    // }
    // queue<pair<int,int> > q;
    // q.push({0,0});

    // while(!q.empty()){
    //     pair<int,int> node = q.front();
    //     int r = node.F;
    //     int c = node.S;
    //     q.pop();

    //     fi(k,0,3){
    //         int nr = r + dx[k];
    //         int nc = c + dy[k];

    //         if(nr>=0 && nr<n && nc>=0 && nc<m && a[nr][nc]=='.'){
    //             if(a[r-1][c]=='B' ||a[r][c-1]=='B' ||a[r][c+1]=='B' ||a[r+1][c]=='B'){
    //                 a[nr][nc]='W';
    //             }
    //             if(a[r-1][c]=='W' ||a[r][c-1]=='W' ||a[r][c+1]=='W' ||a[r+1][c]=='W'){
    //                 a[nr][nc]='B';
    //             }
    //         }
    //     }
    // }

    fi(i,0,n) {
        fi(j,0,m) cout<<ans[i][j];
        cout<<endl;
    }

}
int main()
{
    fast
    solve();
    return 0;
}
