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
    string s;
    cin >> s;
    map<char, int> hm;
    for (char c : s)
    {
        hm[c]++;
    }
    int flag = 0;
    pair<char, int> odd;
    for (auto it : hm)
    {
        if (it.second % 2 == 1)
        {
            odd = {it.first, it.second};
            flag++;
        }
    }
    if (flag > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    hm.erase(odd.first);
    deque<char> dq;
    while (odd.second > 0)
    {
        dq.push_front(odd.first);
        odd.second--;
    }
    for (auto it : hm)
    {
        while (it.second > 0)
        {
            dq.push_front(it.first);
            dq.push_back(it.first);
            it.second = it.second - 2;
        }
    }
    string ans = "";
    while (!dq.empty())
    {
        ans += dq.front();
        dq.pop_front();
    }
    cout << ans << "\n";
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