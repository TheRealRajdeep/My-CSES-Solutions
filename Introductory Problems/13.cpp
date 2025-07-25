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
void rec(int n, vector<string> &ans)
{
    if (n == 0)
    {
        ans.pb("");
        return;
    }
    rec(n - 1, ans);
    int size = ans.size();
    for (int i = size - 1; i >= 0; i--)
    {
        ans.pb("1" + ans[i]);
    }
    for (int i = 0; i < size; i++)
    {
        ans[i] = "0" + ans[i];
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<string> ans;
    rec(n, ans);
    for (string a : ans)
    {
        cout << a << "\n";
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