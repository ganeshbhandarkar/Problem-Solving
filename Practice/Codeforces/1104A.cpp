
// Problem : A. Splitting into digits
// Contest : Codeforces - Codeforces Round #534 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1104/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/* 
 * My Solutions Repository at https://github.com/ganeshbhandarkar/Problem-Solving
 * Author: Ganesh Bhandarkar
 * Working on Improving My Coding Skills
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define tc() long long int t; cin>>t; while(t--)
#define clr(a) memset(a,0,sizeof(a))
#define vi vector<int>
#define vll vector<long long>
#define umii unordered_map<int, int>
#define umll unordered_map<long long ,long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define mci map<char, int>
#define ii pair<int, int>
#define usi unordered_set<int>
#define si set<int>
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define mk make_pair
#define sz(a) int((a).size())
#define MOD 1000000007
#define INF 1e9+10
#define FI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
	int n;cin>>n;
	int ans=INT_MAX;
	int no;
	for(int i=1;i<10;i++){
		if(n/i>0){
			int ele = n/i;
			ans = min(ele,ans);
			no = i;
		}		
	}if(n==4){
		cout<<2<<endl;
		cout<<2<<" "<<2<<endl;
	}else{
		cout<<n<<endl;
		for(int i=0;i<n;i++) cout<<1<<" ";
	}
	
	
}

int main(){
	FI;
	solve();
	return 0;
}
