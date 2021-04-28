#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;






int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

    ll n, s =0;
    // Sum up all the numbers 

    cin >> n;
    for(int i=1; i<n; ++i){
        int a;
        cin >> a; 

        s+=a;
       //cout << a << ' ' << s << '\n';
    }
    cout << n*(n+1)/2-s; // Nice shortcut for calculating all sums from 5 down like 5+4+3+2+1

    


		


}