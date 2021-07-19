#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  int n;
  string s;
  cin >> n >> s;
  for(int i = 0; i < (int)s.size(); i++){
    if(s[i] == '1'){
      if(i % 2 == 0) cout << "Takahashi" << endl;
      else cout << "Aoki" << endl;
      break;
    }
  }
  return 0;
}