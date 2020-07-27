#include<bits/stdc++.h>
using namespace std;
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
   // IO();
    int n,x;cin>>n>>x;
    int pre_sum=0;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pre_sum+=a[i];
        if(pre_sum<=x){
            count++;
        }
    }
    cout<<count;
    return 0;
}