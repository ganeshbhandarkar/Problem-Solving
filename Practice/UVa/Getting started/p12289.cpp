
// Problem : 12289 - One-Two-Three
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3710
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
		string s;cin>>s;
		if(s.size()==5) cout<<"3"<<endl;
		else if((s[0]=='o' && s[2]=='e') || (s[0]=='o' && s[1]=='n') || (s[1]=='n' && s[2]=='e')) cout<<"1"<<endl;
		else cout<<"2"<<endl;
	}
	
	return 0;
}
