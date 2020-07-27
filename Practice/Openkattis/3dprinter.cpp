#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    int p = 1,d = 0;
    while(p<n){
        p*=2;
        d++;
    }
    d++;
    cout<<d;
    return 0;
}