#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void IO(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef OJ
    freopen("C:/Users/KIIT/GITHUB/input.txt","r",stdin);
    freopen("C:/Users/KIIT/GITHUB/output.txt","w",stdout);
    #endif
}

int main(){
    IO();
    ll n;cin>>n;
    const ll length = n;
    ll* a = new ll[length];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll count = 0;
    for(ll i=0;i<n;i++){
        while(count+1 < 0){
            if(a[i+2]-a[i]==2){
            cout<<a[i]<<"-"<<a[i+2]<<" ";
            i=+2;
            }
        }
        else{
            cout<<a[i]<<" ";
        }
        
    }
    return 0;
}