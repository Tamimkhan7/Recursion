#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    cout << n << " ";
    if (n > 1)
    {
        solve(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}