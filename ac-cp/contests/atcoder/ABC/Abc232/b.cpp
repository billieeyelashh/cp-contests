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
    string ans;
    string s,t;
    string abc ="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    cin >> s >> t;
    
    if(s.length() == 1 && t.length() == 1){
        cout << "YES" << endl;    
}
for(int i =0; i< 52;++i){
    if(s[0] == abc[i] && t[0] == abc[i+26]){
        string ans = "YES";
        break;
    }
    else{
        string ans = "NO";
    }
}
cout << ans << endl;
}
