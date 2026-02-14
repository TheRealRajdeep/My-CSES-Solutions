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
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b > n || (min(a, b) == 0 && max(a, b) > 0))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = b + 1; i <= a + b; i++)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= b; i++)
    {
        cout << i << " ";
    }
    for (int i = a + b + 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    rep(i, n)
    {
        cout << i + 1 << " ";
    }
    cout << "\n";
}
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}