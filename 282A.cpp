#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x = 0;
    while (t--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+' && s[i + 1] == '+')
            {
                x++;
            }
            else if (s[i] == '-' && s[i + 1] == '-')
            {
                x--;
            }
        }
    }
    cout << x << endl;
}