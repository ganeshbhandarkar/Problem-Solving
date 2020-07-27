
// Problem : 100 - The 3n + 1 problem
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=36
// Memory Limit : 32 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b; //1 10
    while((scanf("%d %d",&a,&b)) == 2){
        int mx = 0;
        int x = (a>b)?a:b;  
        int y = (a<b)?a:b;  
        for(int i = y; i <= x; i++){
        int n = i,cnt = 1;   
            while(n > 1){ 
                if(n%2!=0)     
                n = 3*n+1;
                else
                n/=2;   
                cnt++;  
            }
            if(cnt >= mx)mx = cnt; 
        }
        cout << a << " " << b << " " << mx << endl;
    }
    return 0;

}

// #include<bits/stdc++.h>
// 
// using namespace std;
// 
// int main(){
	// ios::sync_with_stdio(0);
	// cin.tie(0);
	// int a,b;
	// while(cin>>a>>b){
// 		
		// int max = INT_MIN;
		// int x = (a>b)?a:b;  
        // int y = (a<b)?a:b;  
		// for(int i=y;i<=x;i++){
			// int n = i,count=0;
			// while(n > 1){
				// if(n&1){
					// n = (3*n) + 1;
				// }else{
					// n/=2;
				// }
				// count++;
			// }	
			// if(count >= max){
				// max = count;
			// }
		// }
		// cout<<y<<" "<<x<<" "<<max+1<<endl;
	// }
// 	
	// return 0;
// }
// 