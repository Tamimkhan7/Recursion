#include <bits/stdc++.h>
using namespace std;
void summation(int N)
{
    if (N==0)
    {
        return ;
    }
    else
    {
        long long int A, sum = 0;
        for(int i=N; i<=N; i++)
        {
            cin>>A;
            sum = sum+A;
        }
        cout<<sum<<endl;
        summation(N-1);
    }
}



int main ()
{
    int N;
    cin>>N;
    summation(N);

    return 0;
}
