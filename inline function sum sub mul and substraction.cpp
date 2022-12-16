#include <bits/stdc++.h>
using namespace std;
inline int sum(int a, int b)
{
    return (a+b);
}
inline int sub(int a,int b)
{

    return (a-b);
}
inline double div(double c, double d)
{

    return (c/d);
}
inline double mul(double a, double b)
{
    return (a*b);
}
int main ()
{
    int a,b;
    cin>>a>>b;
    int result = sum(a,b);
    cout<<result<<endl;
    cout<<sub(a,b)<<endl;
    double c, d;
    cin>>c>>d;
    cout<<div(c,d)<<endl;
    cout<<mul(c,d)<<endl;
    return 0;
}
