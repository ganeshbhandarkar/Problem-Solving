#include<bits/stdc++.h>
using namespace std;

int aeiou(int n){
	int num = 0;
	switch(n){
		case 1: num =  2;
		break;
		case 2: num =  1;
		break;
		case 3: num =  2;
		break;
		case 4: num =  2;
		break;
		case 5: num =  2;
		break;
		case 6: num =  1;
		break;
		case 7: num =  2;
		break;
		case 8: num =  2;
		break;
		case 9: num =  2;
		break;
		case 100: num =  2;		
	}
	return num;
}

string numberString(int n){
	string ans ;
	switch(n){
		case 0: ans = "zero";
		break;
		case 1: ans = "one";
		break;
		case 2: ans =  "two";
		break;
		case 3: ans =  "three";
		break;
		case 4: ans =  "four";
		break;
		case 5: ans =  "five";
		break;
		case 6: ans =  "six";
		break;
		case 7: ans =  "seven";
		break;
		case 8: ans =  "eight";
		break;
		case 9: ans =  "nine";
		break;
		case 100: ans =  "hundred";	
	}
	return ans;
}

int pc(int a[],int n,int s) 
{ 
	int repeat=0; 
    unordered_map<int,int> counter; 
    for(int i=0;i<n;i++) counter[a[i]]++;    
    for(int i=0;i<n;i++) 
    { 
        repeat+=counter[s-a[i]]; 
        if ((s-a[i])==a[i]) 
            repeat--; 
    } 
    return (repeat/2); 
} 

int main(){
	int n;cin>>n;
	int d =0,sum=0;
	int a[n];for(int i=0;i<n;i++) cin>>a[i];
	vector<int> collection;
	for(int i=0;i<n;i++){
		int x = a[i];
		while(x>0){
			d = x%10;
			x/=10;
			sum+=aeiou(d);
		}	
	}
	int ans = pc(a,n,sum);
	if(ans>100) cout<<"greater hundred";
	else{
		while(ans>0){
			d = ans%10;
			cout<<ans;
			ans/=10;
			collection.push_back(d);
		}	
		for(int i=collection.size()-1;i>=0;i++)cout<<numberString(collection[i])<<" "; 
	}
	return 0;
}
