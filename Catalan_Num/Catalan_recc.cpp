// Program to find nth Catalan Number
// *** Recursive Solution ***
#include <iostream>
using namespace std;

unsigned long int catalanNumber(int n)
{
    if (n == 0 || n == 1)
        return 1;

    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += catalanNumber(i) * catalanNumber(n - i - 1);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << catalanNumber(n) << "\n";
    return 0;
}