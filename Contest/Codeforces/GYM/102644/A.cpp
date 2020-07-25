
// Problem : A. Random Mood
// Contest : Codeforces - Matrix Exponentiation
// URL : https://codeforces.com/gym/102644/problem/A
// Memory Limit : 256 MB
// Time Limit : 250 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define FI ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
	FI;
	
	int n;
	double p;
	cin>>n>>p;
	
	double p_odd = 1.0;
	while(n>0){x
		if(n%2==1){
			p_odd = p_odd*(1-p) + (1-p_odd)*p;
		}
		p = p*(1-p) + p*(1-p);
		n/=2;
	}
	printf("%.10f",p_odd);
	//cout<<setprecision(10)<<p_odd<<endl;
	return 0;
}
