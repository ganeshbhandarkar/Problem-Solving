/* 
 * My Solutions Repository at https://github.com/ganeshbhandarkar/Problem-Solving
 * Author: Ganesh Bhandarkar
**/

#include<bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll   long long
#define ld   long double
#define vi   vector<int>
#define vll  vector<long long>
#define umii unordered_map<int, int>
#define umll unordered_map<long long ,long long>
#define mii  map<int, int>
#define mll  map<long long, long long>
#define mci  map<char, int>
#define ii   pair<int, int>
#define usi  unordered_set<int>
#define si   set<int>
#define pb   push_back
#define eb   emplace_back
#define del  erase
#define fi   first
#define se   second
#define mk   make_pair
#define MOD  1000000007
#define INF  1e9+10
#define lb   lower_bound
#define ub   upper_bound
#define ln   "\n"
#define pres(n)         cout<<fixed<<setprecision(n)
#define DB(x)           cout<<#x<<" is : "<<x<<endl;
#define watch(x)        cerr<<#x<<"-> "<<x<<endl
#define f(i,start,end)  for(int i=(int)start;i<(int)end;i++)
#define rf(i,start,end) for(int i=(int)start-1;i>=(int)end;i--)
#define toUpper(x)      std::transform(x.begin(), x.end(), x.begin(), std::toupper);
#define toLower(x)      std::transform(x.begin(), x.end(), x.begin(), std::tolower);
#define all(a)          (a).begin(),(a).end()
#define sz(a)           ((a).size())
#define tc()            long long int t; cin>>t; while(t--)
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))

//GCD & LCM
template<class T> T gcd(T a, T b){ if (b == 0)return a; return gcd(b, a % b); }
template<class T> T lcm(T a, T b){ return (b / gcd(a, b))*a; }

// Fast Input/Output
#define FI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T>void scan(T &n){ bool negative = false; register int c; n = 0; c = getchar(); if (c=='-') { negative = true; c = getchar(); } for (; (c>47 && c<58); c=getchar()) {n = n *10 + c - 48;}if (negative){n *= -1;}}
template<typename T> void print(T n) {bool neg = 0;if (n < 0){n *= -1, neg = 1;}char snum[65]; int i = 0; do{snum[i++] = n % 10 + '0'; n /= 10;} while (n); --i; if (neg){putchar('-');}while (i >= 0){putchar(snum[i--]);}putchar('\n'); } 

// power
long long power(long long a,long long b,long long M){
	long long result = 1;
	while(b>0){
		if(b&1){
			result = (result*a)%M;
		}
		a = (a*a)%M;
		b/=2;
	}
	return result;
}

// inverse power Euler theorem(Fermat's little theorem)
long long inverse_power(long long a, long long p){
	return inverse_power(a,p-2);
}





void solve(){
	
	
	
}

int main(){
	FI;
	solve();
	return 0;
}
