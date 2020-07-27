
// Problem : A. Even Odds
// Contest : Codeforces - Codeforces Round #188 (Div. 2)
// URL : https://codeforces.com/problemset/problem/318/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int64_t k,n;cin>>k>>n;
	vector<int64_t> x;
	
	for(int64_t i=1;i<=k;i++){
		if(i&1) x.push_back(i);
	}
	for(int64_t i=2;i<=k;i+=2){
		x.push_back(i);
	}
	cout<<x[n-1];
	
	return 0;
}
