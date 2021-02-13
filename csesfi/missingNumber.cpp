#include <bits/stdc++.h>

using namespace std;





int main(){
	long long  n,c,sum1,sum2,ans;
	cin >> n;
	
	//ReadIn and calculate sum of all c 
	
	for(int i=1; i < n; i++){
		cin >> c;
		sum1 += c;
	}

	sum2 = n*(n+1)/2;

	ans = sum2 - sum1; 

	cout << ans;


}
