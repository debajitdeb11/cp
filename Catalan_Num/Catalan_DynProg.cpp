// Program to find Catalan Number using Dynamic Programming
#include <iostream>
using namespace std;

unsigned long int CatalanDP(unsigned int n)
{

    // Array to store the result of Sub Problem
    unsigned long int catalan[n + 1];

    catalan[0] = catalan[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        catalan[i] = 0;

        for (int j = 0; j < i; j++)
        {
            catalan[i] += catalan[j] * catalan[i - j - 1];
        }
    }

    return catalan[n];
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << CatalanDP(n) << "\n";
    return 0;
}