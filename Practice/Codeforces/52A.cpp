
// Problem : A. 123-sequence
// Contest : Codeforces - Codeforces Testing Round #1
// URL : https://codeforces.com/problemset/problem/52/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	int a[n];
	int p[4];
	memset(p,0,sizeof(p));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++) p[a[i]]++;
	if(p[1] >= p[2] and p[1] >= p[3]){
		cout<<p[2]+p[3];
	}else if(p[2] >= p[1] and p[2] >= p[3]){
		cout<<p[1]+p[3];
	}else if(p[3] >= p[1] and p[3] >= p[2]){
		cout<<p[1]+p[2];
	}
	
	return 0;
}
