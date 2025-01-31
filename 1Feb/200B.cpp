#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0.0, pi;
    for (int i = 0; i < n; i++)
    {
        cin >> pi;
        sum += pi;
    }
    cout << fixed << setprecision(6) << sum / n << endl;
    return 0;
}