#include <iostream>
using namespace std;
bool prime(int n, int i=2)
{
    if (n==1)
    {
        return false;
    }
    else if (n==2)
    {
        return true;
    }
    else if (n%i==0)
    {
        return false;
    }
    else if (i*i>n)
    {
        return true;
    }
    else
    {
        return prime(n, i+1);
    }

}
    int main ()
    {
        int n;
        cin>>n;
        if (prime(n))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }



        return 0;
    }
