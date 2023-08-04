#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    // ai khane print kora sei kotha
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    // ai khane print kora jei kotha
    solve(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}