#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int subs(string input, string output[])
{
    // Base Case
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }
    // Small Output
    string smallString = input.substr(1);
    int smallInput = subs(smallString, output); // 4

    for (int i = 0; i < smallInput; i++)
    {
        output[smallInput + i] = input[0] + output[i];
    }

    return 2 * small
}
