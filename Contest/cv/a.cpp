#include<bits/stdc++.h>
using namespace std;
int czero =0,cone =0;
void count_set_unset_bits(int n,int max){
		int remone=0,remzero=0;
		while(n>0){
			if((n&1)==1) remone++;
			else remzero++;
			n=n>>1;
		}
		if((remzero+remone)<max){
			remzero += (max-(remzero+remone));
		}
		czero+=remzero;cone+=remone;		
	}
int main(){
		int n;cin>>n;
		int a[n];for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int maxbit = a[n-1];
		int numbits =0;
		while(maxbit>0){
			if((n&1)==1) numbits++;
			else numbits++;		
			maxbit=maxbit>>1;
		}
		for(int i=0;i<n;i++) count_set_unset_bits(a[i],numbits);
		//cout<<czero<<" "<<cone;
		if(czero==cone){
			int bn[32]; 
			int i = 0; 
			while (n > 0) { 
				bn[i] = n % 2; 
				n = n / 2; 
				i++; 
			} 
			int prezeros = numbits-i;
			while(prezeros--) cout<<"0";
			for (int j = i - 1; j >= 0; j--) 
				cout << bn[j];
		}else{
			while(numbits--) cout<<"0";
		}
		return 0;
}
