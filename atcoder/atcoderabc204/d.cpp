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

    int n;
    cin >> n;

    if(n<= 0){
        cout << "0";
    }
    else if(n<=100){
        cout << "1";
    }
    else if(n % 100 == 0 ){
        cout << n/100;
    }
    else{
        cout << n/100 +1;
    }

	
    
}