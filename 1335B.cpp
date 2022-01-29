<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
            cout << char('a' + i % b);
        cout << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
            cout << char('a' + i % b);
        cout << endl;
    }
    return 0;
>>>>>>> 2b8d5988392d1eeba61797f168703eff8d5f3fc3
}