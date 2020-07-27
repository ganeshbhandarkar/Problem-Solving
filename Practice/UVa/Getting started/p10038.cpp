
// Problem : 10038 - Jolly Jumpers
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=979
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
	int n;
	while(cin>>n){
		bool sol = true;
		vector<int> a,pre;
		for(int i=0;i<n;i++){
			int x;cin>>x;a.push_back(x);
		}
		for(int i=0;i<n-1;i++){
			pre.push_back(abs(a[i+1]-a[i]));
		} 
		sort(pre.begin(),pre.end());
		for(int i=0;i<(int)pre.size();i++){
			if(pre[i]!=i+1){
				sol = false;
				cout<<"Not jolly"<<endl;
				break;
			}
		}
		if(sol) cout<<"Jolly"<<endl;
	}
	// int n;cin>>n;int a[n];for(int i=0;i<n;i++) cin>>a[i];
	// int pre[9];memset(pre,0,sizeof(pre));
	// int sol[9];
	// for(int i=1;i<=n;i++){
		// pre[i] = abs(a[i]-a[i-1]);		
	// }
	// for(int i=1;i<=n;i++){
		// sol[pre[i]]++;
	// }
	// for(int i=1;i<=n;i++){
		// if(sol[i]>1){
			// cout<<"Not jolly"<<endl;
			// break;
		// }else{
			// cout<<"Jolly"<<endl;
			// break;
		// }
	// }
	
	return 0;
}
