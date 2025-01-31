#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        int space = q - p;
        if (space >= 2)
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}