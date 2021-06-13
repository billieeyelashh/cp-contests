#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Made up 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

	int n,k;
    cin >> n >> k;
    // do it k times


    for(int i =0; i<= k; ++i){

        if(n % 200 ==0){
            
            n = n / 200;
        }
        else{
            n.to_string();
            n.append("200");
        }

    }
    
    cout << n;
}