
// Problem : 11364 - Parking
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2349
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
	
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int a[n];for(int i=0;i<n;i++) cin>>a[i];
		int ma,mi;ma=*max_element(a,a+n);mi=*min_element(a,a+n);
		cout<<(ma-mi)*2<<endl;
	}
	return 0;
}
