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


	int ans5 =0;
	int ans3 = 0;
	int n = 1000;
	
	// calcualte Multiples of 3
	while( ans3 < n){
		if( ans3 == 999){
			break;
	}
		else{
			ans3 = ans3 + 3;
		}

	}

	// calculate Multipes of 5
	while( ans5  < n){
		if(ans5 == 995){ //Become cleaner if you write it directly in the while statement
			break;
	}
		else{
			ans5 = ans5 +5;
		}

	}

	int endsum = ans3 + ans5;

	cout << "Sum of Multiples of 3 " << ans3;
	cout << "Sum of Multiples of 5 " << ans5;

	cout << "Both sums added together " << endsum;




}



