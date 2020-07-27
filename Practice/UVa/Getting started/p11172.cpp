
// Problem : 11172 - Relational Operator
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113
// Memory Limit : 32 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		if(a>b)cout<<">"<<endl;
		else if(a<b) cout<<"<"<<endl;
		else if(a==b) cout<<"="<<endl;
	}
	return 0;
}
