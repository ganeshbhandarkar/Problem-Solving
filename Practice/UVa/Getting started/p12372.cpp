
// Problem : 12372 - Packing for Holiday
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3794
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
	int t;cin>>t;int c=1;while(t--){
	int l,w,h;cin>>l>>w>>h;
	(l<=20 && w<=20 && h<=20)?printf("Case %d: good\n",c++):printf("Case %d: bad\n",c++);
	}
	
	return 0;
}
