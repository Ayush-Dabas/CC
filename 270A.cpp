#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int n = 180 - a;
        if (360 % n == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}