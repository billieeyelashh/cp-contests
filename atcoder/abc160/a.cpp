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
   	
	string s;
	cin >> s;

	if(s[2] == s[3] && s[4] == s[5]){
		cout << "Yes" << endl;
			}
	else{
	cout << "No" << endl;
	}
}
