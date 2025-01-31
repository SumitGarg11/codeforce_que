#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<int> ss;
    for (auto v : s)
    {
        ss.insert(v - 'a');
    }
    if (ss.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}