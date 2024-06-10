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
void pr(vector<int> &vv, int k)
{
    auto p = count(vv.begin(), vv.end(), 1);
    // cout << p << endl;
}
void print(vector<int> &v, int k)
{
    vector<int> vv;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            k++;
            cout << k;
            vv.push_back(k);
        }
    }

    pr(vv, k);
}
void solve(string s, int n, int c)
{
    vector<int> v;
    if (n == -1)
        return;
    solve(s, n - 1, c);
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')
    {
        c++;
        v.push_back(c);
    }
    int k = 0;
    print(v, k);
}
int main()
{
    faster;
    string s;
    getline(cin, s);
    int n = s.size();
    solve(s, n, 0);
    return 0;
}