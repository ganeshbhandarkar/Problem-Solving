
// Problem : 11547 - Automatic Answer
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2542
// Memory Limit : 32 MB
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
	int tt;cin>>tt;
	while(tt--){
		long long n;cin>>n;
		n=n*567;n=n/9;n=n+7492;n*=235;n/=47;n-=498;n=n/10;cout<<abs(n%10)<<endl;
	}
	
	return 0;
}
