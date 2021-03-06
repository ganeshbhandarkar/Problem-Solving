
// Problem : A. Crazy Computer
// Contest : Codeforces - Codeforces Round #372 (Div. 2)
// URL : https://codeforces.com/problemset/problem/716/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
	// Atleast one word will remain on screen so count = 1 before hand
	int n,c;
	cin>>n>>c;
	int count = 1;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.pb(x);
	}
	for(int i=1;i<n;i++){
		if(v[i]-v[i-1]>c){
			count=1;
		}else if(v[i]-v[i-1]<=c){
			count++;
		}
		
	}
	cout<<count;
}

int main(){
	FI;
	solve();
	return 0;
}
