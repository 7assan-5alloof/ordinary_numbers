#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.in", "r", stdin);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int cnt = 0;
        for (int x = 1; x < 10; x++) for (int y = 1; y <= 111111111; y = y * 10 + 1)
            {
                if (x * y <= n) cnt++;
                else break;
            }

        cout << cnt << '\n';
    }

    return 0;
}
