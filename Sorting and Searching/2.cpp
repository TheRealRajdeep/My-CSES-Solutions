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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, m)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[j] < a[i] - k)
        {
            j++;
        }
        else if (b[j] > a[i] + k)
        {
            i++;
        }
        else
        {
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt << "\n";
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