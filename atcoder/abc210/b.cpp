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

	int n; cin >> n;
	string s; cin >> s;
	bool b = false;

	for(int i =0; i< n; ++i){
		if(s[i]=='1' && i % 2==0){
			b = true;
			break;

		}
		else if(s[i]=='0' && i % 2!=0){
			b = false;
			break;
		}


		
	}

	if(b==true){
		cout << "Aoki";
	}
	else {
		cout << "Takahashi";
	}	


 }
 