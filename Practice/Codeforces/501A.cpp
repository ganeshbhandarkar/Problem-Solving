
// Problem : A. Contest
// Contest : Codeforces - Codeforces Round #285 (Div. 2)
// URL : https://codeforces.com/problemset/problem/501/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, d;
    cin>>a>>b>>c>>d;
    int p = max((3 * a)/10, a - ((a/250) * c));
    int q = max((3 * b)/10, b - ((b/250) * d));
    if (p > q) {
        cout<<"Misha";
    }
    else if (q > p) {
        cout<<"Vasya";
    }
    else {
        cout<<"Tie";
    }
	return 0;
}
