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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<int>> vis(n, vector<int>(m));
    vector<vector<int>> par(n, vector<int>(m));
    pair<int, int> start, end;
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                start = {i, j};
            }
            if (a[i][j] == 'B')
            {
                end = {i, j};
            }
            if (a[i][j] == '#')
            {
                vis[i][j] = 2;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push(start);
    int cnt = 0;
    int flag = 0;
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<char> dirc = {'U', 'D', 'L', 'R'};
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        if (node.F == end.F && node.S == end.S)
        {
            flag = 1;
            break;
        }
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> x = {node.F + dirs[i].F, node.S + dirs[i].S};
            if (x.F >= n || x.F < 0 || x.S >= m || x.S < 0)
            {
                continue;
            }
            if (vis[x.F][x.S] > 0)
            {
                continue;
            }
            else
            {
                vis[x.F][x.S] = 1;
                par[x.F][x.S] = i;
                q.push({x.F, x.S});
                cnt++;
            }
        }
    }
    if (!flag)
    {
        cout << "NO\n";
        return;
    }
    string s = "";
    pair<int, int> curr = end;
    while (curr != start)
    {
        int x = par[curr.F][curr.S];
        s += dirc[x];
        curr.F -= dirs[x].F;
        curr.S -= dirs[x].S;
    }
    reverse(all(s));
    cout << "YES\n";
    cout << s.size() << "\n";
    cout << s << "\n";
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