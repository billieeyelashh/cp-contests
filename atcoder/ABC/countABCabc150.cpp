#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//Count abc find the substrings 

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
		
    string s;
    int n;

    cin >> n >> s;
    int ans = 0;

    for(int i; i<= n-3; i++){
        if(s[i]== 'A' && s[i + 1] == 'B' && s[i+2] == 'C'){
            ans++;
        }
    }
    cout << ans;




}