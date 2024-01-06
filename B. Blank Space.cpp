#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                cur++;
                ans = max(ans, cur);
            } else {
                cur = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
