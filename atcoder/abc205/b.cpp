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

    vector<int> A(n);
    vector<int> B(n);

    for(int i=0; i <n; ++i){
        cin >> A[i];
    }

    // Count up to n an check if the numbers are in the list
    for(int i =1; i<=n; ++i){
        B[i] == i;
    }
    bool is_permutation = false;
    // Check if vector b and a have the same numbers

    /* if A is permutation of B;
        cout << "YES";
       else
        cout << "NO"

    */


}