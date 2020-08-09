/*
 * @Author: ganesh bhandarkar 
 * @Date: 2020-08-09 21:48:33 
 * @Last Modified by:   ganesh bhandarkar 
 * @Last Modified time: 2020-08-09 21:48:33 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int tt;cin>>tt;

    while(tt--){
        int n;cin>>n;
        int a[n];for(int i=0;i<n;i++) cin>>a[i];
        int k;cin>>k;
        sort(a,a+n);
        cout<<a[k-1]<<endl;
    }
    return 0;
}