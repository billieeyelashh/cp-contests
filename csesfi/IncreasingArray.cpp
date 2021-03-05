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

	int n;
	cin >> n;
	
	int mx=0;
	ll ans=0; // Keeps  track of swaps 

	//int array[];
	// Read in array
	for(int i=0; i < n;i++){
		int x;
		cin >> x;
		mx = max(x, mx);
		ans+=mx -x;
		
	}

	cout << ans;
		


}



