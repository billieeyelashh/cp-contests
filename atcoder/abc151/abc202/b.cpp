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

	reverse(s.begin(),s.end());

	for(char c: s){
		if (c =='6'){
			cout << '9';
		}
		else if (c=='9'){
			cout << '6';
		}
		else{
			cout << c;
		}

	}
	
	// replace(s.begin(), s.end(), '6' , '9');
	//for(char c : s){
		// if 9 replace with 6 if 6 replace with 9
	//	if(c==9){
	//		replace()
	//	}
	//	else if(c==6){

	//	}

//	}


    
}
