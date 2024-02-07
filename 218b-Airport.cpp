#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second>b.second)	return true;
	return false;
}
int main(){
	int n,m,mxcst=0,mncst=0;
	cin>>n>>m;
	int a[m];
	priority_queue<int> maxpq;
	priority_queue<int,vector<int> ,greater<int> > minpq;
	
	for(int i=0;i<m;i++){
		cin>>a[i];
		maxpq.push(a[i]);
		minpq.push(a[i]);
	}
	int z = n;
	while(n>0){
		int x = maxpq.top();
		maxpq.pop();
		mxcst +=  x;
		if(x>1){
			x--;
			maxpq.push(x);
		}
		n--;
	}
	while(z>0){
		int x = minpq.top();
		minpq.pop();
		mncst +=  x;
		if(x>1){
			x--;
			minpq.push(x);
		}
		z--;
	}
	
	cout<<mxcst<<" "<<mncst;
	
}
