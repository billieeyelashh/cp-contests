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

	int x; 
	cin >> x;
	int hap_sum = 0;
	
	int c500 = x/500;
	int r500 = x%500; // gets fraction of the overall coins 
	int c5 = r500/5;
	
	hap_sum = (c5 *5) + (c500 * 1000);

	cout << hap_sum;
	

}	
