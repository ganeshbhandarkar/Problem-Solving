
// Problem : 11727 - Cost Cutting
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827
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
	int i=1;
	while(t--){
	int a[3];
	for(int i=0;i<3;i++) cin>>a[i];
	sort(a,a+3);		
	cout<<"Case "<<i<<": "<<a[1]<<endl;
	i++;
	}
	
	
	return 0;
}
