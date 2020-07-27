
// Problem : 11498 - Division of Nlogonia
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2493
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
	int t;
	while((cin>>t)){
		if(t==0) break;
		else{
			int x,y;cin>>x>>y;
			for(int i=0;i<t;i++){
				int m,n;cin>>m>>n;
				if(m==x or n==y) cout<<"divisa"<<endl;
				else if(x<m and y<n) cout<<"NE"<<endl;
				else if(x>m and y>n) cout<<"SO"<<endl;
				else if(x>m and y<n) cout<<"NO"<<endl;
				else cout<<"SE"<<endl;
			}
		}
	}
	
	return 0;
}
