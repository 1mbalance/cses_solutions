#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--) {
        ll y,x; cin>>y>>x;
        if (x >= y) {
            if(x%2==0) cout<<(x-1)*(x-1)+1+(y-1)<<"\n";
            else cout<<x*x-(y-1)<<"\n";
        }   
        else {
            if(y%2==0) cout<<y*y-(x-1)<<"\n";
            else cout<<(y-1)*(y-1)+1+(x-1)<<"\n";
        }
    }
    

}