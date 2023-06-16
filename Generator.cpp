#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define dl '\n'
#define accuracy chrono::steady_clock::now().time_since_epoch().count()

mt19937 rng(accuracy);

ll gen_int(ll l = -2e9, ll r = 2e9){
		uniform_int_distribution < ll > ludo(l, r); return ludo(rng);
}

char gen_char(bool upperCase = false, bool Digit = false, char l = 'a', char r = 'z'){
		if(upperCase)
			return 'A' + gen_int(l - 'A', r - 'A');
		if(Digit)
			return '0' + gen_int(l - '0', r - '0');
		return 'a' + gen_int(l - 'a', r - 'a');
}

int main(){
    freopen("input.txt", "w", stdout);

    int n = gen_int(1 , 10);
    for(int i=0; i<n; i++){
        cout << gen_char();
    }

    
    // code here
    return 0;
}