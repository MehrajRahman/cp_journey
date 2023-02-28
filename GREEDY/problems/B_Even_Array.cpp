#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define precision cout << fixed << setprecision(12);
#define done cout << "Successful\n";
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define print(x) cout << #x << " = " << x << "\n";
#define nl "\n"
#define sp " "

void solve()
{
    int n, res, oc = 0, ec = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 1 && i % 2 != 1)
        {
            ec++;
        }
        if (v[i] % 2 == 0 && i % 2 != 0)
        {
            oc++;
        }
    }

    if (ec == oc)
    {
        cout << ec << nl;
    }
    else
    {
        cout << -1 << nl;
    }
}

int main()
{

    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    // solve();
    return 0;
}
