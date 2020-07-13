
// Problem : A. Anton and Polyhedrons
// Contest : Codeforces - Codeforces Round #404 (Div. 2)
// URL : https://codeforces.com/problemset/problem/785/A
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

	map<string, int> m = {{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
	int n;
	cin>>n;
	int sum =0;
	while(n--){
		string s;
		cin>>s;		
		for(auto i : m){
			if(i.first==s){
				sum+=i.second;
			}
		}
	}
	cout<<sum;
}

int main(){
	FI;
	solve();
	return 0;
}
