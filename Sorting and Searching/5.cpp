#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i < n; i++)
#define mp make_pair
#define all(a) a.begin(), a.end()
#define pb push_back
#define F first
#define S second
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        a.pb({x, 1});
        a.pb({y, -1});
    }
    sort(all(a));
    int curr = 0;
    int mx = 0;
    rep(i, a.size())
    {
        curr += a[i].second;
        mx = max(mx, curr);
    }
    cout << mx << "\n";
}
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}