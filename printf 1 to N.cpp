#include <iostream>
using namespace std;
int print(int N)
{
    if (N>=1)
    {
        for (int i=N; i>=1; i--){
            cout<<i<<" ";
        }
        cout<<endl;
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
