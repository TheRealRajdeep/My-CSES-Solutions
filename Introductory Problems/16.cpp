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
int rec(vector<int> &a, int n, int sum, int curr)
{
    if (n < 0)
    {
        return abs(sum - curr);
    }
    int take = rec(a, n - 1, sum - a[n], curr + a[n]);
    int notTake = rec(a, n - 1, sum, curr);
    return min(take, notTake);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << rec(a, n - 1, sum, 0) << "\n";
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