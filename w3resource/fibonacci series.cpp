#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return solve(n - 2) + solve(n - 1);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << solve(i) << endl;
    }
}