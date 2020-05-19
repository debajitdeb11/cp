// Normal Reccursive Exponentation Method
#include <iostream>
using namespace std;

long long int exponentation(int x, int n)
{
    if (n == 1)
        return x;
    if (n == 0)
        return 1;

    return x * exponentation(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << exponentation(x, n);

    return 0;
}

/*

Here, Time Complexitity = O(n)
      Space Complexitity = O(n)

*/