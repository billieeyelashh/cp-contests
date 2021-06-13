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
    vector <int> A(n-1);
    int sum = 0 ;

	//  if tree 10 <= don't take nuts
    // if tree > 10 take nuts -10
    
    for(int i =0; i <n; ++i){
        cin >> A[i];
    }

    for(int i=0;i<n;++i){
        if(A[i]> 10){
            sum += (A[i]-10);
        }
    }
    
    cout << sum;
    
}