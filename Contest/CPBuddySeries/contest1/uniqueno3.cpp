/*
* 		author: Ganesh Bhandarkar
* 		date: 05.08.2020 20:33:19 IST
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;cin>>tc;
    while(tc--){
        int n,k;cin>>n>>k;
        int a[n];for(int i=0;i<n;i++) cin>>a[i];
        map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(auto x: mp){
            if(x.second == 1){
                cout<<x.first<<endl;
                break;
            }
        }
    }
    return 0;
}
