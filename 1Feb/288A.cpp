#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> ss;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        ss.insert(a);
    }
    cout << 4 - ss.size() << endl;
    return 0;
}