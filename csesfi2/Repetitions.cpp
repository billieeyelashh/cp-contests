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

    // Find the longest seqeunce of Letters so I need a variable that keeps track about how many following letters there are. And a variable the stores the current maximum
    int ans = 1, c =0;
    char l = 'A';

    for(char d : s){
        if(d == l){
            ++c;
            ans = max(c,ans); // Filter if there is a new max 
        }
        else{
            l=d;  // for new letter 
            c=1; // MAx length always is min. 1
        }
    }

cout << ans;
		


}