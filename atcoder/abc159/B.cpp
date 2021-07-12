#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

bool is_palindrome(string s){
    string t(s.rbegin(),s.rend());
    return s == t;
}
 
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(is_palindrome(s) && is_palindrome(s.substr(0,(n-1)/2)) && is_palindrome(s.substr((n+1)/2))){
        cout<<"Yes"<<endl;
        cout << "First Substring: " << s.substr(0,(n-1)/2) << endl;
    }
    else{
    	cout << "No" << endl;
    }

		


 }