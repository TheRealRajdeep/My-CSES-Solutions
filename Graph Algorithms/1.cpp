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
void dfs(vector<vector<int>> &a, int i, int j, int n, int m)
{
    if (i >= n || j >= m || i < 0 || j < 0)
    {
        return;
    }
    if (a[i][j] != 0)
    {
        return;
    }
    a[i][j] = 1;
    dfs(a, i + 1, j, n, m);
    dfs(a, i - 1, j, n, m);
    dfs(a, i, j + 1, n, m);
    dfs(a, i, j - 1, n, m);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
            {
                a[i][j] = 2;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                dfs(a, i, j, n, m);
                cnt++;
            }
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