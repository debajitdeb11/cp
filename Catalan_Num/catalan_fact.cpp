// Program to find nth Catalan No. Using Factorial
#include <iostream>
using namespace std;

unsigned long long int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}

unsigned long long int CatalanNumber(int m)
{
    if (m == 0 || m == 1)
        return 1;

    return (fact(2 * m) / (fact(m + 1) * fact(m)));
}

int main()
{
    int m;
    cin >> m;
    cout << CatalanNumber(m) << "\n";
    return 0;
}