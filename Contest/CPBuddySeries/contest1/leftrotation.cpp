/*
* 		author: Ganesh Bhandarkar
* 		date: 05.08.2020 20:33:30 IST
**/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[(i+n-d)%n];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
