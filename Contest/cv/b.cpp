#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int t;cin>>t;
    while(t--){
		int n;cin>>n;
		int a[n];
		int one=0,two=0,zero=0;
		for(int i=0;i<n;i++) cin>>a[i]; 
		for(int i=0;i<n;i++){ 
			if(a[i]%3==0) zero++; 
			else if(a[i]%3==1) one++; 
			else two++; 
		}
		if((zero==0 && one!=0 && two!=0)or(zero > one+two+1)) cout << "No";
		else cout<<"Yes"<<endl;    		
	}   
    return 0; 
} 
