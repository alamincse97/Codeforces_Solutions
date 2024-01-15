#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
  optimize();
  string s, t;
  int i, j=0, k=1; // k=1 because it is 1-based index, so initial index is 1 and not 0
  cin >> s >> t;
  for(i=0; i<t.size(); i++){
    if(t[i]==s[j]){ // if color and instruction are same move to next color (index)
        k++;
        j++;
    }
  }
  cout << k << endl;
  return 0;
}

