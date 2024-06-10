#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
void inserts(stack<int> &v, int temp)
{
    if (v.size() == 0 || v.top() <= temp)
    {
        v.push(temp);
        return;
    }
    int val = v.top();
    v.pop();
    inserts(v, temp);
    v.push(val);
}
void sorts(stack<int> &v)
{
    if (v.size() == 1)
        return;

    int temp = v.top();
    v.pop();
    sorts(v);
    inserts(v, temp);
}
void print(stack<int> &v)
{
    if (v.empty())
        return;

    int x = v.top();
    v.pop();
    print(v);
    cout << x << " ";
}
int main()
{
    int n;
    cin >> n;
    stack<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push(a);
    }
    sorts(v);
    print(v);
}