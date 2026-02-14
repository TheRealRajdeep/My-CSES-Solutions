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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(all(a));
    int i = 0;
    int j = n - 1;
    int cnt = 0;
    while (i < j)
    {
        if (a[j] <= x - a[i])
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
    cout << n - cnt << "\n";
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