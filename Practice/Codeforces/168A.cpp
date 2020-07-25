
// Problem : A. Wizards and Demonstration
// Contest : Codeforces - Codeforces Round #114 (Div. 2)
// URL : https://codeforces.com/problemset/problem/168/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	double x,y,z;
	cin>>x>>y>>z;
    if(floor((y*100)/x)>=z)	
        cout<<0<<endl;
        
    else
    {
        int clones = ceil((z*x)/100) - y;
        cout<<clones<<endl;
    }
	
	return 0;
}
