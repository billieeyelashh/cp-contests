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

	/* Variales
		N heads of cabbage
		X yen per head
		if buy more then A heads the heads after A+1 will be sold for Y yen
	*/	


	int n,a,x,y; cin >> n >> a >> x >> y;
	int sum = 0;

	for( int i = 0; i < n; ++i){
			if(i<a) {
				sum += x;
				// Debug
				cout << "this is sum" << sum  << "at i " << i << endl;
			}
			else {
				sum += y;
			}

	}

	cout << sum;
 }
 