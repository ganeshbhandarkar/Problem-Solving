/*
 * @Author: ganesh bhandarkar 
 * @Date: 2020-08-09 21:45:43 
 * @Last Modified by:   ganesh bhandarkar 
 * @Last Modified time: 2020-08-09 21:45:43 
 */

#include <bits/stdc++.h>
using namespace std;

int lps(string s) {
    int n = s.length();
    int lp[n];
    int i=1,j=0;
    lp[0]=0;
    while (i<n) {
        if (s[i]==s[j]) {
            j++;
            lp[i] = j;
            i++;
        } else {
            if (j != 0)
                j = lp[j-1];
            else {
                lp[i] = 0;
                i++;
            }
        }
    }
    return lp[n-1];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        printf("%d\n",lps(s));
    }
    return 0;
}