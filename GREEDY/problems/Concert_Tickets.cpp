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

int binarySearch(int k, vector<int> v, int n)
{
    int si = 0, res = -1;
    int ei = n - 1;

    while (si <= ei && ei >= 0 && si <= n - 1)
    {
        int midi = (si + ei) / 2;
        if (v[midi] == k)
        {
            res = k;
            v[midi] = -1;
            break;
        }
        if (v[si] <= k)
        {
            if (v[si] > -1)
            {
                res = v[si];
                v[si] = -1;
            }
        }
        if (v[ei] <= k)
        {
            if (v[ei] > -1)
            {
                res = v[ei];
                v[ei] = -1;
            }
        }

        if (v[midi] > k)
        {
            ei = midi - 1;
        }
        else if (v[midi] < k)
        {
            si = midi + 1;
            if (v[midi] > -1)
            {
                res = v[midi];
            }
        }
    }
    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    vector<int> p;
    vector<int> r;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < m; ++j)
    {
        int sum = 0;
        if (p[j] < v[0] || p[j] > v[n - 1])
        {
            sum = 0;
        }
        else
        {
            for (int j = 0; j < m; ++j)
            {
                sum = binarySearch(p[j], v, n);
                r.push_back(sum);
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        cout << r[i] << nl;
    }
}

int main()
{

    fast;
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    solve();
    return 0;
}
