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

    // must always draw     
    // 0 rock 1 scissos 2 paper


    int x, y; cin >> x >> y;


    if(x==0 && y==0){
        cout << "0";
    }
    else if(x==1 && y ==1){
        cout << "1";
    }
    // cases for 2
    else if((x==2 && y==2) || (x==1 && y == 0)){
        cout << "2";
    }
    else if(x==0 && y ==1){
        cout << "2";
    }
    //cases for 1
    else if(x==2 &&  y==0){
        cout << "1";
    }
    else if(x==0 && y==2){
        cout << "1";
    }
    //cases for 0
    else if( x==1 && y==2){
        cout << "0";
    }
    else if (x==2 && y==1){
        cout << "0";
    }

}
 