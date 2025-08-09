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
int cnt = 0;
bool isSafe(vector<string> &a, int i, int j)
{
    if (a[i][j] == '*')
    {
        return false;
    }
    for (int k = i; k >= 0; k--)
    {
        if (a[k][j] == 'Q')
        {
            return false;
        }
    }
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (a[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y--;
    }
    x = i;
    y = j;
    while (x >= 0 && y < 8)
    {
        if (a[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}
void rec(vector<string> &a, int i)
{
    if (i == 8)
    {
        cnt++;
        return;
    }
    for (int j = 0; j < 8; j++)
    {
        if (isSafe(a, i, j))
        {
            a[i][j] = 'Q';
            rec(a, i + 1);
            a[i][j] = '.';
        }
    }
}
void solve()
{
    vector<string> a(8);
    rep(i, 8)
    {
        cin >> a[i];
    }
    cnt = 0;
    rec(a, 0);
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