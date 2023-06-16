#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define dl '\n'

const ll Mod = 1e9 + 7;

void fastio(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("correctOutput.txt", "w", stdout);
#endif
}

int main(){
    fastio();

    string s; cin >> s;
    int n = sz(s);
    
    for(int i=0; i<n / 2 - 1; i++){
        if(s[i] != s[i + 1]){
            cout << "YES" << dl;
            return 0;
        }
    }
    cout << "NO" << dl;

    return 0;
}