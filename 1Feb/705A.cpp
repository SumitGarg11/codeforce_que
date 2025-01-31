#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << "I Hate ";
        }
        else
        {
            cout << "I Love ";
        }
        if (i < n)
        {
            cout << "that ";
        }
    }
    cout << "it";
}