#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int solve(int n, int arr[])
{
    int sum;
    if (n == 1)
    {
        return 0;
    }
    solve(n - 1, arr);
    sum = arr[n];
    cout << sum << endl;
    return sum;
}
int main()
{
    faster;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int res = solve(n, arr);
    int sum = 0;
    sum += res;
    cout << sum << endl;
    return 0;
}