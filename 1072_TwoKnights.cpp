#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    for (int i = 1; i<=n; i++) {
        ll t = i*i;
        ll k = t*(t-1)/2;
        if (k > 2) k -= 4*(i-1)*(i-2);
        cout << k << "\n";
    }   
}