
// Problem : Pot
// Contest : Kattis
// URL : https://open.kattis.com/problems/pot
// Memory Limit : 1024 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/* 
 * My Solutions Repository at https://github.com/ganeshbhandarkar/Problem-Solving
 * Author: Ganesh Bhandarkar
 * Working on Improving Coding Skills
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
#define usi unordered_set<int>
#define si set<int>
#define pb push_back
#define eb emplace_back
#define sz size()
#define fi first
#define se second
#define mk make_pair
#define MOD 1000000007
#define INF 1e9+10
#define FI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll power(ll a,ll b){
	int res = 1;
	while(b>0){
		if(b&1){
			res*=a;
		}
		a=a*a;
		b>>=1;
	}
	return res;
}

void solve(){

	int n;
	cin>>n;
	int sum=0;
	while(n--){
		int x,p;
		cin>>x;
		p=x%10;
		x=x/10;		
		sum+=power(x,p);
	}
	cout<<sum;
	
}

int main(){
	FI;
	solve();
	// tc(){solve();}
	return 0;
}
