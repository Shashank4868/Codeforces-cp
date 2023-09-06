#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define floop(i,n) for(ll j = i;j < n ; j++)

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fast_io();
    ll n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}