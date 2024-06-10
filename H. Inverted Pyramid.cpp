#include <bits/stdc++.h>
using namespace std;
void prymid(int N, int space)
{

    if (N==0)
    {
        return;
    }
    else
    {
        for (int k=space; k<=N; k++)
        {
            cout<<" ";
        }
        for (int i=1; i<=(2*space-1); i++)//
        {
            cout<<"*";
        }
        cout<<endl;

        prymid(N-1, space+1);
    }
}

int main  ()
{
    int N;
    cin>>N;
    prymid(N,1);

    return 0;
}
