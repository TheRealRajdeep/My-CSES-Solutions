#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <, n; i++)
#define mp make_pair
#define all(a) a.begin(), a.end()
#define pb push_back
#define F first
#define S second
const int mod = 1e9 + 7;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        swap(a, b);
    }
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }
    if ((a + b) % 3 == 0 && a >= b / 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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