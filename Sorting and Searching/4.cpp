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
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    vector<int> b(m);
    rep(i, n)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    rep(i, m)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = a.lower_bound(b[i]);
        if (it != a.end() && *it == b[i])
        {
            cout << *it << "\n";
            a.erase(it);
        }
        else if (it != a.begin())
        {
            --it;
            cout << *it << "\n";
            a.erase(it);
        }
        else
        {
            cout << -1 << "\n";
        }
    }
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