
// Problem : A. Key races
// Contest : Codeforces - Codeforces Round #427 (Div. 2)
// URL : https://codeforces.com/problemset/problem/835/A
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

	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int tot1=0,tot2=0;
	if(v1>t1){
		tot1 = s*v1+t1+min(v1,t1);//cout<<tot1;
	}if(v1<t1){
		tot1 = s*v1+t1+max(v1,t1);//cout<<tot1;
	}if(t2>v2){
		tot2 = s*v2+t2+max(v2,t2);//cout<<tot2;
	}if(t2<v2){
		tot2 = s*v2+t2+min(v2,t2);//cout<<tot2;
	}
	if(t1==v1 or t2==v2){
		tot1 = s*v1+t1+v1;
		tot2 = s*v2+t2+v2;
	}
	if(tot1<tot2){
		cout<<"First";//cout<<tot1<<" "<<tot2;
	}else if(tot1>tot2){
		cout<<"Second";//cout<<tot1<<" "<<tot2;
	}else{
		cout<<"Friendship";	//cout<<tot1<<" "<<tot2;
	}
}

int main(){
	FI;
	solve();
	return 0;
}
