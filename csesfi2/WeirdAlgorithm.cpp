#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Solving this using segment trees

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
    
    ll n;

    cin >> n;
    cout << n << '\n';

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
            cout << n << '\n';

        }
        else{
            n = (n *3) +1;
            cout << n << '\n';
        }

    }


	}

		