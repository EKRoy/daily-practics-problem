#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n, k;
  cin >> n >> k;
  if(n == k) {
    cout << "1\n";
    return;
  }
  int ans = 0;
  if(n&1) {
    ans++;
    n -= k;
  }
  k--;
  ans += n/k;
  if(n%k != 0) ans++;
  cout << ans << "\n";
}
int32_t main() {
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;
  cin >> t;
  for(int i = 1; i <= t; i++) {
    solve();
  }
  return 0;
}