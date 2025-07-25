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

int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int k = max(r, c);
        int x = (k - 1) * (k - 1);
        if (k & 1)
        {
            cout << x + c + (k - r) << "\n";
        }
        else
        {
            cout << x + r + (k - c) << "\n";
        }
    }
    return 0;
}