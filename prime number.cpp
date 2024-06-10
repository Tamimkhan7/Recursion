// problem ace pore solve korbo
#include <iostream>
using namespace std;

int main()
{

    int n, c = 1;
    cin >> n;
    int i;
    if (n == 1 || n == 0)
    {
        c++;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 1)
    {
        cout << "This nuumber is prime" << endl;
    }
    else
    {
        cout << "This number is not prime" << endl;
    }

    return 0;
}
