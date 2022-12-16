#include <iostream>
using namespace std;
int print(int N)
{
    if  (N>=1)
    {
        cout<<"I love Recursion"<<endl;
        return print(N-1);;
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
    //int result = print(i);
    //cout<<"I love recursion"<<int result<<endl;
    return 0;
}
