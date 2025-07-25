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
    int sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<int> ans1, ans2;
    int target = sum / 2;
    for (int i = n; i >= 1; i--)
    {
        if (target >= i)
        {
            target = target - i;
            ans1.pb(i);
        }
        else
        {
            ans2.pb(i);
        }
    }
    cout << ans1.size() << "\n";
    rep(i, ans1.size())
    {
        cout << ans1[i] << " ";
    }
    cout << "\n";
    cout << ans2.size() << "\n";
    rep(i, ans2.size())
    {
        cout << ans2[i] << " ";
    }
    cout << "\n";
}
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}