#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll n,x;
ll ans = 0;
//Graph
vector<vector<int>>g;

void dfs(ll pos, ll kvi){
    if(pos == n){
        if(kvi ==x){
            ans++;
        }
        return;
    }
        for(ll c : g[pos]){
            if(x/c > kvi){
                continue;
            }
            dfs(pos+1, kvi*c);
        }

    
}


int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
    
    cin >> n >> x;
    
    g.resize(n);
    for(ll i = 0; i< n; ++i){
        ll L; cin >> L;
        g[i].resize(L);
        for(ll j = 0; j < L - 1;j++){
            cin >> g[i][j];
    }
    }
    dfs(0,1);

    cout << ans << endl;

}
