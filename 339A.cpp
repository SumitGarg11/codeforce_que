#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string a = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            a = a + s[i];
        }
    }
    sort(a.begin(), a.end());
    string res = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (i > 0)
            res = res + '+';
        res = res + a[i];
    }
    cout << res;
}