#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long prv = 0;
    long long k;
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
        cin >> k;

        if (prv > k) ans += prv - k, k += prv-k;
        prv = k;
    }

    cout << ans << "\n";
}