#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, w;
    cin >> k >> n >> w;
    int total_cost = k * (w * (w + 1)) / 2;
    int ans = max(0, total_cost - n);
    cout << ans;
}