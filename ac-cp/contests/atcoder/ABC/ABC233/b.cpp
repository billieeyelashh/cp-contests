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

    int l,r,p,q;
    string s;

    cin >> l >> r >> s;
    
    l--;r--;

    p =l;
    q =r;

    while(q>p){
        swap(s[p],s[q]);
        p++;q--;
    }
    cout << s << endl;
}
