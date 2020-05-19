// Fast Exponentation Method
#include <iostream>
using namespace std;

long long int FastExponentation(int x, int n)
{
    if (n == 0)
        return 1;

    if (n == 1)
        return x;

    else
    {
        long int R = FastExponentation(x, n / 2);

        // Check if n is ODD or EVEN
        if (n % 2 == 0)
            return R * R;

        return R * x * R;
    }
}

int main()
{

    int x, n;
    cin >> x >> n;
    cout << FastExponentation(x, n) << "\n";
    return 0;
}

/*
    Time Complexitity: O(log n)
    Space Complexitity: O(log n)
*/