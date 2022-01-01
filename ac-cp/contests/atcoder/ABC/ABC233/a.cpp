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
	int x,y = 0;
	int ans = 0;

	cin >> x >> y;

	for(int i =0;i< 100000; ++i){
		if(x >=y){
			break;
		}
		x +=10;
		ans += 1;
		}
		cout << ans;

}