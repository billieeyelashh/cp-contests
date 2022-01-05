#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll n,x;
vector<vector<ll>>a;
ll ans = 0;

void dfs(ll pos,ll kvi ){
    if(pos=n){
        if(x=kvi){
            ans++;
        }
        return;
}
    for(ll c : a[pos]){
        cout << "kvi" << kvi << endl;
        if(x/c<kvi){
            continue;  
        }
        dfs(pos+1,kvi*c);
    
    }

}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
    
    //ll n,x;
    //vector<vector<ll>>a;

    // Read in Data
    cin >> n >> x;
    a.resize(n);
    for (int i = 0 ; i < n ; i++) {
        ll L; cin >> L;
        a[i].resize(L);
        for (int j = 0 ; j < L ; j++) {
            cin >> a[i][j];
        }
    }
    // Calculate

    dfs(0,1);
    cout << ans << endl;

}
