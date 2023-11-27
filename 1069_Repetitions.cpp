#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count = 1, k = 1; 
    string s; cin >> s;

    for(int i = 0; i < s.size() - 1; i++) {
        
        if (s[i] == s[i + 1]) count++;
        else count = 1;
        k = max(k, count);
        
    }

    cout << k << "\n";

    
    
    

}