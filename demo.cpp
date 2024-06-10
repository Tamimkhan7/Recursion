
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        int mn, hour;
        cin >> a >> b >> c;

        vector < pair < int, int > > v(a);

        for (int i = 0; i < a; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i] = {x, y};
        }

        sort(v.begin(), v.end());

        pair < int, int > next_alarm = {v[0].first, v[0].second};

        if (next_alarm.first == b && next_alarm.second == c)
        {
            cout << 0 << " " << 0 << "\n";
        }
        else
        {

        }
    }
}
