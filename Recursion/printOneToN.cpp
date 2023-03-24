// Problem print 1 to N(given) and N to (1)

#include <iostream>
using namespace std;

void printOneToN(int n)
{
    if (n == 0)
    {
        return;
    }
    printOneToN(n - 1);
    cout << n << " ";
}

void printNToOne(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNToOne(n - 1);
}

int main()
{

    printOneToN(5);
    cout << endl;
    printNToOne(5);

    return 0;
}