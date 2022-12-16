#include <iostream>
using namespace std;
powermathod(int base, int power)
{
    if (power !=0)
    {
        return base*powermathod(base, power-1);
    }
    else
    {
        return 1;
    }

}

int main ()
{
    int base, power;
    cin>>base;
    cin>>power;
    powermathod(base, power);

    cout<<powermathod(base,power)<<endl;




    return 0;
}
