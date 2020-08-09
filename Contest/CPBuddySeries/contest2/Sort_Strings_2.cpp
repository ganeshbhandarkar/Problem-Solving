/*
 * @Author: ganesh bhandarkar 
 * @Date: 2020-08-09 21:47:56 
 * @Last Modified by:   ganesh bhandarkar 
 * @Last Modified time: 2020-08-09 21:47:56 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;cin>>n;
    string s;
    string ss = "";
    string sl = "";
    string ans = "";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            ss += s[i];
        }else{
            sl += s[i];
        }
    }
    sort(ss.begin(),ss.end());
    sort(sl.begin(),sl.end());
    int cs=0,cl=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            ans +=ss[cs];
            cs++;
        }else{
            ans +=sl[cl];
            cl++;
        }
    }
    cout<<ans<<endl;
    return 0;
}