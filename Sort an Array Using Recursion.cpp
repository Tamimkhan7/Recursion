#include <bits/stdc++.h>
using namespace std;
void sortinginteger(int *list, int n)
{
    if (n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << list[i] << ", ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (list[n - 1] == smallestindex(list))
            {
                for (int j = 0; j < n; j++)
                {
                    swap(list[i], list[j]);
                }
            }
        }
        sortinginteger(list, n - 1);
    }
}

int smallestindex(int *arr)
{
    int smallest = arr[0];
    for (int i = 1; i < sizeof(arr); i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int n;
    cin >> n; // size of the array
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sortinginteger(arr, n);
}
