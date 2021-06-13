#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAX_N=2000;

vector<vector<int>>Graph; //Graph 
bool temp[MAX_N]; // Max Cities

void dfs(int v){ // vertex Scheitelpunkt // Decendant nachfahre // Back edges = gebogegene verbindungen
    if(temp[v])return;
    temp[v] =true;
    for(auto vv:Graph[v])dfs(vv);
    }


int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

  
    
    
}