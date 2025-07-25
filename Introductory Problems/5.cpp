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
        int n;
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << "NO SOLUTION\n";
        }
        else if (n == 4)
        {
            cout << "2 4 1 3\n";
        }
        else
        {
            for (int i = 1; i <= n; i = i + 2)
            {
                cout << i << " ";
            }
            for (int i = 2; i <= n; i = i + 2)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}