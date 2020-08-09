/*
 * @Author: ganesh bhandarkar 
 * @Date: 2020-08-09 21:44:56 
 * @Last Modified by:   ganesh bhandarkar 
 * @Last Modified time: 2020-08-09 21:44:56 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i] == s[i-1])
        {
            s.erase(i-1,2);
            i=0;
        }
    }
    if(s.length() == 0) cout<<"Empty String";
    else cout<<s;
    return 0;
}