#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int sq = 0, k = 0;
    
    for (int i = 1; i <= n; i++) sq ^= i;
    for (int i = 1; i < n; i++) cin >> k, sq ^= k;

    cout << sq << "\n";
}