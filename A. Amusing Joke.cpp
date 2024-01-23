#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
  optimize();
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  string s4 = s1 + s2;
  sort(s3.begin(), s3.end());
  sort(s4.begin(), s4.end());

  if(s3 == s4)
  {
      cout << "YES" << endl;
  }
  else
  {
      cout << "NO" << endl;
  }
  return 0;
}


