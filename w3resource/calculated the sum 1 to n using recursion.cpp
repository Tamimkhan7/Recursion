#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int res;
    if (n == 0)
    {
        return 0;
    }
    res = n + solve(n - 1);
    return res;
}
int main()
{
    int n;
    cin >> n;
    int res = solve(n);
    cout << res << endl;
}