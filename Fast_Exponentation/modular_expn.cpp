// Example of Modular Exponentation
#include <iostream>
using namespace std;

int ModularExponentation(int x, int y, int p)
{
    if (y == 0)
        return 1;

    if (y == 1)
        return y;

    else
    {
        long int R = ModularExponentation(x, y / 2, p) % p;

        if (R % 2 == 0)
            return (R * R) % p;

        return (R * R * x) % p;
    }
}

int main()
{
    int x, y, p;
    cin >> x >> y >> p;
    cout << ModularExponentation(x, y, p);
    return 0;
}