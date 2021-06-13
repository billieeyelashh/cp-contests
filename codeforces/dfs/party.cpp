#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAX_N=2000;

vector<vector<int>>G;
bool temp[MAX_N];
void dfs(int v){
	if(temp[v])return ;
    cout << "This is v: " << v << "\n";
	temp[v]=true;
    cout << "This is temp v: " << temp[v] << "\n";
	for(auto vv:G[v])dfs(vv);
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);


    int N,M;
	cin >> N >> M;
	G.resize(N);

	for(int i=0;i<M;i++){
		int a,b;
        cout << "This is a: " << a << "\n" << "This is b: " << b << "\n";
		cin >> a >> b;
		G[a-1].push_back(b-1);
        cout << "This is a after push_back: " << a << "\n"<< "This is b afer push_back: " << b << "\n";


	}
	int ans=0;
    cout << "this is ans: " << ans << '\n';
	for(int i=0;i<N;i++){
        cout << "This is n: " << N << "\n";
		for(int j=0;j<N;j++)temp[j]=false;
        //cout << "This is j" << temp[j];
		dfs(i);
        cout << "This is i: " << i << '\n';
        
		for(int j=0;j<N;j++)if(temp[j])ans++;
        cout << "This is current ans: " << ans << '\n';
	}
	
	cout << ans;

    



}
