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


// From Now on We will use PII 
// in the place of pair<...
// we will put wight at the forst place
// and price at the second place

typedef pair<int, int> PII;

vector<PII>v;

bool comp(PII A, PII B){
    // We want to order on decreasing order of 
    // price / weight.
    // SO: return A.price / A.weight > B.price / B.weight
    // But it is better if we can avoid division
    // because of possible precision loss
    // So we can rewrite it as:
    // return A.price * B.weight > B.price* A.weight
    // we use first for weight and secong for price
    return A.second * B.first > A.first * B.second;

}


void fractional_knapsack() {
    int n, w;
    cin >>n  ;
    for(int i = 0; i < n ; ++i){
        int weight, price;
        cin >> weight >> price;
        v.push_back(PII(weight, price));

    }

    sort(v.begin(), v.end(), comp);

    cin >> w;
    int ans = 0;
    for(int i = 0; i < n ; ++i){
        // W is remaining capacity
        // v[i].first is weight of the ith element;
        // so steal minimum of them
        int z = min(w, v[i].first);
        w-=z;
        ans += z*v[i].second;
    }

    cout << ans << endl;
}



int main()
{

    fast;
    int t;
    cin >> t;
    while (t--)
        fractional_knapsack();
    // solve();
    return 0;
}
