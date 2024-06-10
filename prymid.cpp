

//hoy na korte hobe next time

#include <bits/stdc++.h>
using namespace std;
int prymid(int N)
{
    int c=0,k,i,j;
    if (N==0)
    {
        return 0;
    }
    else
        for (i=1; i<=N; i++)
        {
            for (j=i; j<=N; j++)
            {
                cout<<" ";
            }

            cout<<"* "<<endl;
        }
    //return prymid(N-1);



}

int main ()
{
    int N;
    cin>>N;
    prymid(N);

    return 0;
}
