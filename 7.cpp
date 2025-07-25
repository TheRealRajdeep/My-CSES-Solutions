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
    int mul = 0;
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        if (k == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            sum += mul * 8;
            int a = k * k;
            cout << (a * (a - 1)) / 2 - sum << "\n";
            mul++;
        }
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