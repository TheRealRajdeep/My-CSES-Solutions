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
    // cin >> t;
    t = 1;
    while (t--)
    {
        int x;
        cin >> x;
        cout << x << " ";
        while (x > 1)
        {
            if (x % 2 == 0)
            {
                x = x / 2;
            }
            else
            {
                x = x * 3 + 1;
            }
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}