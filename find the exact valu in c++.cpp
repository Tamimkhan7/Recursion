#include <iostream>
using namespace std;

void fa(int x)
{
    if (x==0)
    {
        return ;
    }
    else
    {
        --x;
        cout<<x<<endl;
        fa(x);
        cout<<x<<endl;
    }
}

int main ()
{
    int x;
    cin>>x;
    fa(x);

    return 0;
}
