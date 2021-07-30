#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (k < 9)
            {
                cnt++;
                continue;
            }

            int length = 7;
            for (int x = 11; length > 0; length--)
            {
                if (k % x == 0)
                {
                    cnt++;
                    break;
                }
                x = x * 10 + 1;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
