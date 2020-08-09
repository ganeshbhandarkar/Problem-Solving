/*
 * @Author: ganesh bhandarkar 
 * @Date: 2020-08-09 21:47:04 
 * @Last Modified by:   ganesh bhandarkar 
 * @Last Modified time: 2020-08-09 21:47:04 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define CHAR 256
using namespace std;

bool palcheck(string str) 
{ 
    int count[CHAR];
    memset(count,0,sizeof(count));
    for (int i=0;str[i];i++) count[str[i]]++; 
    int odd = 0; 
    for (int i=0;i<CHAR;i++){ 
        if(count[i]&1) odd++; 
        if(odd>1) return false; 
    } 
    return true; 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(palcheck(s)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}