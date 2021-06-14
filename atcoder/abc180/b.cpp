#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define _USE_MATH_DEFINES
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

    int n; cin >> n;
    float sum1;
    float sum2;
    float sum3;

    vector<int> A(n);

    for(int i=0; i <n; ++i){
        cin >> A[i];
    }
    //Manhatten
    for(int i=0; i<n; ++i){
        sum1 += abs(A[i]);
    }
    cout <<  sum1 << endl;
    
    //Euclidian
    for (int i =0; i<n; ++i){
        sum2 += pow(abs(A[i]),2);
    }
    cout << sqrt(sum2) << endl;
    // Chebsyshev
    
    for (int i =0; i<n;++i){
        sum3 = max(sum3,abs(A[i]));
    }

    cout << sum3 << endl;

}