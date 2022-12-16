#include <iostream>
using namespace std;
int print(int N)
{
    if (N>=1)
    {
        for (int i=1; i<=N ; i++)
        {
            cout<<i<<endl;
        }

    }
    else
    {
        return 0;
    }
}
int main ()
{
    int N;
    cin>>N;
    print(N);


    return 0;
}
