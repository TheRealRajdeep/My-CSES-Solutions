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
        string s;
        cin >> s;
        int n = s.size();
        int ans = 1;
        int curr = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                curr++;
            }
            else
            {
                ans = max(curr, ans);
                curr = 1;
            }
        }
        ans = max(curr, ans);
        cout << ans << "\n";
    }
    return 0;
}