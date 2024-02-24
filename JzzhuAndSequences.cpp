#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;

int main(){
    int n,m,d;
    cin>>n>>m>>d;
	cin>>x;
	vector<int> vec(6);
	vec[0]=n-m;
	vec[1]=n;
	vec[2]=m;
	vec[3]=m-n;
	vec[4]=-n;
	vec[5]=-m;
	cout<<(vec[x%6]+2*mod)%mod;
    return 0;
}
