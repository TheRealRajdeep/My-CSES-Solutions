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
void rec(int n, int a, int b, int c)
{
    if (n == 1)
    {
        cout << a << " " << c << "\n";
        return;
    }
    rec(n - 1, a, c, b);
    cout << a << " " << c << "\n";
    rec(n - 1, b, a, c);
}
void solve()
{
    int n;
    cin >> n;
    cout << (1LL << n) - 1 << "\n";
    rec(n, 1, 2, 3);
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