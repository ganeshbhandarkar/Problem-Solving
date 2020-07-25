
// Problem : A. Is it rated?
// Contest : Codeforces - Codeforces Round #412 (rated, Div. 2, base on VK Cup 2017 Round 3)
// URL : https://codeforces.com/problemset/problem/807/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int ans;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	int a[n],b[n];
	ans = -1;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			ans = 0;
		}
	}
	
	if(ans == 0) cout<<"rated";
	else{
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				ans = 1;
				break;
			}
			
		}
		if(ans==1){
				cout<<"unrated";
			}else{
				cout<<"maybe";
			}
	}
	
	
	
	return 0;
}
