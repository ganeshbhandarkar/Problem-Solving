
// Problem : A. Summer Camp
// Contest : Codeforces - Codeforces Round #352 (Div. 2)
// URL : https://codeforces.com/problemset/problem/672/A
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
	string s;
	for(int i=1;i<1000;i++){
		string con = std::to_string(i);
		s.append(con);
	}
	int n;cin>>n;
	cout<<s[n-1];
	
}

int main(){
	FI;
	solve();
	return 0;
}

// Different solution

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int c=1,p;
   int count_digits=0,rem;
   while(1)
   {
       p=c;
       vector<int>v;
       while(p>0)
       {
           rem=p%10;
           p=p/10;
           v.push_back(rem);
       }
       reverse(v.begin(),v.end());
       c++;
       if((v.size()+count_digits)>=n)
       {
           cout<<(v[n-count_digits-1]);
           return 0;
       }
       else
       {
           count_digits=count_digits+v.size();
           //cout<<count_digits;
       }

   }
}
