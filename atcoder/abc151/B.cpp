#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Achieve the Goal

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

    int n,k,m;
    cin >> n >> k >> m;

    int sum =0 ;

    for(int i=1; i < n ; i++){
        int cur;
        cin >> cur;
        sum += cur;
    }

    if(sum + k >= n * m){
        cout << max(0, n*m-sum) << endl;

    }else{
        cout << -1 << endl;
    }

}
