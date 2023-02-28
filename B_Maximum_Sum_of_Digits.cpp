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
    ll n, test, num = 0, renum, sum = 0, c = 0;
    cin >> n;
    test = n;
    while (test > 0)
    {
        c++;
        test /= 10;
        num *= 10;
        num += 9;
    }
    num /= 10;

    if (n < 10)
    {
        cout << n << nl;
        return;
    }
    else
    {
        renum = n - num;
        sum += 9 * (c - 1);

        while (renum > 0)
        {
            sum += (renum % 10);
            renum /= 10;
        }
    }

    cout << sum << nl;
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
