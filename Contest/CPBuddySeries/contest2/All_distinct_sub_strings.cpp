/*
 * @Author: ganesh bhandarkar 
 * @Date: 2020-08-09 21:46:34 
 * @Last Modified by:   ganesh bhandarkar 
 * @Last Modified time: 2020-08-09 21:46:34 
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
    int t;cin>>t;
    while(t--){
        char s[26];cin>>s;
        //cin.ignore();
        int count=0;
        map<char, int> sc;
        for(int i=0;s[i]!='\0';i++) sc[s[i]]++;
        for(auto i : sc){
            if(i.second > 1){
                count += (i.second-1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}