#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
  optimize();
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  queue<int> q;
  int ar[n+2];
  for (int i=0; i<n; i++)
  {
      cin >> ar[i];
      q.push(i);
  }
  int ans;
  while(!q.empty())
  {
      int z=q.front();
      ans = z+1;
      if(mp[z] + m >= ar[z])q.pop();
      else
      {
          q.pop();
          mp[z]+=m;
          q.push(z);
      }
  }
  cout << ans << endl;
  return 0;
}


