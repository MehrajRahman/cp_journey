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
typedef pair<int, int> PII;

vector<PII> v;

bool comp(PII A, PII B)
{

    return A.first < B.first;
}

void solve()
{
    ll n, w, sum = 0;
    cin >> n >> w;
    vector<int> t;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(PII(x, i + 1));
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n; ++i)
    {
        // W is remaining capacity
        // v[i].first is weight of the ith element;
        // so steal minimum of them
        if (v[i].first <= w)
        {
            sum += v[i].first;
            if (sum <= w)
            {
                t.push_back(v[i].second);
            }
            if (sum >= w / 2)
            {
                break;
            }
        }
    }

    if (t.size() < 1)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << t.size() << nl;
        for (int i = 0; i < t.size(); ++i)
        {
            cout << t[i] << " ";
        }
        cout << nl;
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
